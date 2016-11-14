#include <iostream>
#include <fstream>

using namespace std;

const int RecordCount = 14;

int main()
{
    float times[RecordCount];
    ifstream inFile("times.txt");

    for (auto i = 0; i < RecordCount; i++)
    {
        inFile >> times[i];
    }

    float sum = 0.0;
    for (auto i = 0; i < RecordCount; i++)
    {
        sum += times[i];
    }
    float avg = sum / RecordCount;
    cout << "Average time is: " << avg << endl;

    float min = FLT_MAX;
    for (auto i = 0; i < RecordCount; i++)
    {
        if (times[i] < min)
        {
            min = times[i];
        }
    }
    cout << "Best time is: " << min << endl;

    float max = -FLT_MAX;
    for (auto i = 0; i < RecordCount; i++)
    {
        if (times[i] > max)
        {
            max = times[i];
        }
    }
    cout << "Worst time is: " << max << endl;
    return 0;
}