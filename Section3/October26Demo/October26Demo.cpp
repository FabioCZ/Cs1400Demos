// October26Demo.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>
//#include <unistd.h>

using namespace std;
const int MillisInSecond = 1000;
// http://www.cplusplus.com/reference/cstdio/printf/
void printfExample()
{
    int i = 5;
    cout << "The number is " << i << endl;

    printf("The number is %d\n", i);
    float myNumber = 98.2;
    printf("%s %4.5f\n", "Hi There", myNumber);
}

void howToSleep()
{
    for (auto i = 0; i < 10; ++i)
    {
        cout << "Number is:" << i << endl;
        //windows.h
        Sleep(2 * MillisInSecond);
        //unistd.h
        //sleep(seconds);
        //nanosleep(microseconds);
    }
}

void howToExit()
{
    cout << "In exit func" << endl;
    exit(0);
}

void stringStuff()
{
    string myStr = "my Fun Little String";
    cout << myStr.substr(3,3) << endl;
    cout << myStr.front() << " " << myStr.back() << endl;
    cout << "Length is: " << myStr.length() << endl;

    if (myStr.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }
    myStr.erase();
    cout << "MyStr is : " << myStr << endl;
    if (myStr.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }

    myStr.append("appending new stuff");
    cout << "MyStr is : " << myStr << endl;
    size_t numberOfOccurences = myStr.find("new");
    if (numberOfOccurences != string::npos)
    {
        cout << "Contains new" << endl;
    }
    else
    {
        cout << "Doesn't contain new" << endl;
    }

}

int main()
{
    //printfExample();
    //howToSleep();
    //howToExit();
    stringStuff();
    //cout << "In main after exit";
	return 0;
}

