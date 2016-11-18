//
// Created by KeanoFabricio on 11/15/2016.
//

#ifndef SNEK_SNEK_HPP
#define SNEK_SNEK_HPP

const int width = 15;
const int height = 15;
const int MaxInputSize = 10;
struct InputData
{

    int actualSize = 0;
    char input[MaxInputSize];
};

class Snek
{
public:
    Snek();
    void gameLoop();

private:
    char board[height][width];
    //So I don't necessarily need to keep track of playerX and playerY separately,
    //but it makes it so I don't have to search the whole array.
    int playerX;
    int playerY;
    int score;

    InputData gatherInput();
    void updateState(InputData data);
    void placeFood();
    void printBoard();
};


#endif //SNEK_SNEK_HPP
