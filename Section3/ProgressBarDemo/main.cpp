#include "ProgressBar.h"
#include <Windows.h>

using namespace std;

int main()
{
    ProgressBar pr1(20,'#');
    const int step = 10;
    for (int i = 0; i <= 100; i += step)
    {
        pr1.incrementProgress(step);
        pr1.print();
        Sleep(500);
    }
	return 0;
}

