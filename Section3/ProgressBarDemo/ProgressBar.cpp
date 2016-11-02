#include "ProgressBar.h"
#include <iostream>
using namespace std;
ProgressBar::ProgressBar()
{
    percentage = 0;
    widthInChar = 50;
    progressSymbol = '*';
}
ProgressBar::ProgressBar(int wid, char prSym)
{
    percentage = 0;
    widthInChar = wid;
    progressSymbol = prSym;
}

int ProgressBar::getPercentage()
{
    return percentage;
}
void ProgressBar::incrementProgress()
{
    if (percentage < 100)
    {
        percentage++;
    }
}
void ProgressBar::incrementProgress(int per)
{
    if (percentage < 100)
    {
        percentage += per;
        if (percentage > 100)
        {
            percentage = 100;
        }
    }
}
void ProgressBar::print()
{
    cout << "Progress: " << percentage << "%" << endl;
    for (int i = 0; i < widthInChar+2; i++)
    {
        cout << "-";
    }
    cout << endl;
    cout << "|";

    double ratio = percentage / static_cast<double>(100);
    int numChar = ratio * widthInChar;
    for (int i = 0; i < numChar; i++)
    {
        cout << progressSymbol;
    }

    for (int i = 0; i < widthInChar - numChar; i++)
    {
        cout << " ";
    }
    
    cout << "|" << endl;

    for (int i = 0; i < widthInChar + 2; i++)
    {
        cout << "-";
    }
    cout << endl;

}