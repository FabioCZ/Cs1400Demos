//
// Created by KeanoFabricio on 11/15/2016.
//

#include <iostream>
#include "Snek.hpp"
#include <cstdlib>
#include <ctime>

Snek::Snek()
{
    srand(time(NULL));
    playerX = 1;
    playerY = 1;
    score = 0;
    //initialize the array to spaces
    for(auto i = 0; i < height;i++)
    {
        for(auto j = 0; j < width;j++)
        {
            board[j][i] = ' ';
        }
    }
    board[playerY][playerX] = '*';  //Init star for player
    placeFood();
}


void Snek::gameLoop()
{
    printBoard();
    while(true) {
        //gather input
        auto data = gatherInput();
        //update state
        updateState(data);
        // draw/print the state
        printBoard();
    }
}

InputData Snek::gatherInput()
{
    std::string input;
    std::cin >> input;
    InputData data;
    data.actualSize = input.length();
    for(auto i =0; i < input.length();++i)
    {
        data.input[i] = input[i];
    }
    return data;
}

void Snek::updateState(InputData data) {
    for(auto i = 0; i < data.actualSize; ++i)
    {
        board[playerY][playerX] = ' '; //insert space into old position
        // Execute move
        switch (data.input[i])
        {
            case 'w':
                playerY--;
                break;
            case 'a':
                playerX--;
                break;
            case 's':
                playerY++;
                break;
            case 'd':
                playerX++;
                break;
            case 'q':
                //It would be better to handle this case differently, but I wanted to show you the exit function :)
                exit(0);
                break;
            default:
                std::cout << "Encountered an unknown command" << std::endl;
                break;
        }
        // handle conditions for going off the board.
        // If that happens, we'll go to the other side of the board
        if(playerX == -1)
        {
            playerX = width -1;
        }
        else if(playerX == width)
        {
            playerX = 0;
        }
        else if(playerY == -1)
        {
            playerY = height-1;
        }
        else if(playerY == height)
        {
            playerY = 0;
        }

        // Find out if we have eaten or not.
        if(board[playerY][playerX] == '.')
        {
            board[playerY][playerX] = '*';
            score++;
            placeFood();
        }
        else
        {
            board[playerY][playerX] = '*';
        }

    }

}

void Snek::placeFood() {
    auto newX = rand() % width;
    auto newY = rand() % height;
    while(newX == playerX && newY == playerY)
    {
        newX = rand() % width;
        newY = rand() % height;
    }
    board[newY][newX] = '.';
}

void Snek::printBoard() {
    std::cout << "Score: " << score << std::endl;
    for(auto i = 0; i < width; ++i)
    {
        std::cout << '-';
    }
    std::cout << std::endl;

    for(auto i = 0; i < height; ++i)
    {
        std::cout << '|';
        for(auto j = 0; j < width; ++j)
        {
            std::cout << board[i][j];
        }
        std::cout << '|' << std::endl;
    }
    for(auto i = 0; i < width; ++i)
    {
        std::cout << '-';
    }
    std::cout << std::endl;

}



