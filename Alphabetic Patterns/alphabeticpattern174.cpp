#include <iostream>
using namespace std;

int main()
{
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1)
                cout << "I";
            else if (j == height / 2)
                cout << "I";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}