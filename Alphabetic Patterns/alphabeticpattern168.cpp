#include <iostream>
using namespace std;

int main()
{
    int i, j, height = 5;
    for (i = 0; i < height; i++)
    {
        cout << "C";
        for (j = 0; j < (height - 1); j++)
        {
            if (i == 0 || i == height - 1)
                cout << "C";
            else
                continue;
        }
        cout << "\n";
    }
    return 0;
}