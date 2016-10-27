#include <iostream>

using namespace std;

//auto return type - the compiler will figure out the return type for you
//you will need Visual Studio 2015
//or with Clion, modify CMakeList.txt to have std=c++14 (instead of 11)
auto GiveMeAnInt()
{
	return 1;
}

auto GiveMeAChar()
{
	char myChar = 'a';
	return myChar;
}

struct MyFunStruct
{
	int a;
	char b;
	float c;
};


int main()
{
	MyFunStruct x;
	x.a = 1;
	x.b = 'b';
	x.c = 3.2;

	MyFunStruct y = {1,'b',3.2};
	//x and y hold the same data


	int i = 3;
	decltype(i) j = 4;
	//j will have the same type as the declared type of i

	return 0;
}