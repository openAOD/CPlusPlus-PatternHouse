#include <iostream>
using namespace std;
int main()
{
    int i, j, height = 5;
    for (i = 0; i < height; i++)
    {
        cout << "F";
        for (j = 0; j < height; j++)
        {
            if ((i == 0) || (i == height / 2 && j <= height / 2))
                cout << "F";
            else
                continue;
        }
        cout << "\n";
    }
    return 0;
}