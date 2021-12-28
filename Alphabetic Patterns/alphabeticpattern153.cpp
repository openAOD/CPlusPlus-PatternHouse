#include <iostream>
using namespace std;
int main()
{
    int height = 5;
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j <= height; j++)
        {
            if (j == height)
                cout << "*";
            else if (j == counter)
                cout << "*";
            else
                cout << " ";
        }
        counter++;
        cout << "\n";
    }
    return 0;
}