using namespace std;
#include "Progressbar.h"
#include <Windows.h>
int main()
{
    ProgressBar pr1(20,'#');
    const int step = 10;
    for (auto i = 0; i < 100; i += step)
    {
        pr1.increment(step);
        pr1.print();
        Sleep(500);
    }
    return 0;
}