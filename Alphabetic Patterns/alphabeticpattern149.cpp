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
            if(i == 0) cout<<"* ";
            else if (i == height - 1 && (j > 0 && j < height - 1))
                cout << "*";
            else if ((j == height - 1 && i != height - 1) || (i > (height / 2) - 1 && j == 0 && i != height - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}