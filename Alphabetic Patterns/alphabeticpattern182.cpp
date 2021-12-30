#include <iostream>
using namespace std;

int main()
{
    int height = 5;
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= width; j++)
        {
            if (j == width - abs(space) || j == abs(space))
                cout << "Q";
            else if ((i == 0 || i == height - 1) && j > abs(space) && j < width - abs(space))
                cout << "Q";
            else
                cout << " ";
        }
        if (space != 0 && i < height / 2)
        {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        cout << "\n";
    }
    int d = height;
    for (i = 0; i < height / 2; i++)
    {
        for (j = 0; j <= d; j++)
        {
            if (j == d)
                cout << "Q";
            else
                cout << " ";
        }
        cout << "\n";
        d++;
    }
    return 0;
}