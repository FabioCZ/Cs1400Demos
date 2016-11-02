#include <iostream>
#include "Progressbar.h"

using namespace std;

ProgressBar::ProgressBar()
{
    percentage = 0;
    width = 30;
    progressSymbol = '*';
}
ProgressBar::ProgressBar(int w, char ps)
{
    percentage = 0;
    width = w;
    progressSymbol = ps;
}

int ProgressBar::getPercentage()
{
    return percentage;
}
void ProgressBar::increment()
{
    if (percentage < 100)
    {
        percentage++;
    }
}
void ProgressBar::increment(int incr)
{
    if (percentage < 100)
    {
        percentage+= incr;
        if (percentage > 100)
        {
            percentage = 100;
        }
    }
}
void ProgressBar::print()
{
    cout << "Progress: " << percentage << "%" << endl;
    for (int i = 0; i < width + 2; i++)
    {
        cout << "-";
    }
    cout << endl;
    cout << "|";
    double ratio = percentage / 100.0;
    int numChar = width * ratio;

    for (int i = 0; i < numChar; i++)
    {
        cout << progressSymbol;
    }
    for (int i = 0; i < width - numChar; i++)
    {
        cout << " ";
    }
    cout << "|";
    cout << endl;
    for (int i = 0; i < width + 2; i++)
    {
        cout << "-";
    }
    cout << endl;
}
bool ProgressBar::hasFinished()
{
    return percentage == 100;
}