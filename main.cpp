#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World! \n" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << i << " x 12 = " << i * 12 << "\n";
    }
    cout << endl;

    int timesTable[10][10];

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            timesTable[i][j] = i * j;
            cout << "timesTable[" << i << "] * [" << j << "] = " << timesTable[i][j] << endl;
        }
    }

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << "timesTable[" << i << "][" << j << "] = " << timesTable[i][j] << endl;
        }
        cout << endl;
    }


    return 0;
}