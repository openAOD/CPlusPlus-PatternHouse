#include <iostream>
using namespace std;

int main()
{
    int height = 5;
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j <= half; j++)
        {
            if (j == abs(dummy))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
        dummy--;
    }
    return 0;
}