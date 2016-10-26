#include <iostream>
#include <cstdio>
#include <Windows.h>
//#include <unistd.h>
#include <string>

using namespace std;

const int MillisInSecond = 1000;
// http://www.cplusplus.com/reference/cstdio/printf/
void printFDemo()
{
    int i = 5;
    string myStr = "Hey there";
    float myFloat = 42.2;
    cout << "Number is: " << i << endl;
    printf("Number is: %d %d\n",i,i);

    printf("String is: %s, number is: %4.1f\n", myStr.c_str(), myFloat);
}

void howToSleep()
{
    for (auto i = 0; i < 10; ++i)
    {
        //cout << "Number is: " << i << endl;
        printf("Number is: %d\n", i);
        //windows.h
        Sleep(2 * MillisInSecond);
        //unistd.h
        //sleep(seconds);
        //nanosleep(microseconds);
        
        //also C++11 sleep_for
    }
}

void howToExit()
{
    exit(0);
}

void stringStuff()
{
    string myStr = "My fun little string";
    cout << myStr.substr(3,3) << endl; //2nd param is optional

    cout << myStr.front() << " " << myStr.back() << " " << myStr.at(4) << endl;

    cout << "String length: " << myStr.length() << endl;

    if (myStr.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }
    myStr.erase();
    cout << "String is: " << myStr << endl;
    if (myStr.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }

    myStr = "Something";
    myStr.append(" more");
    cout << myStr << endl;

    size_t occurences = myStr.find("thing");
    if (occurences != string::npos)
    {
        cout << "thing found" << endl;
    }
    else
    {
        cout << "thing not found" << endl;
    }
}



int main()
{
    //printFDemo();
    //howToSleep();
    //howToExit();
    //cout << "After exit function" << endl;
    stringStuff();
    //.....
	return 0;
}

