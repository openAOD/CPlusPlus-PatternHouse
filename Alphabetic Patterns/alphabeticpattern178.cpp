#include <iostream>
using namespace std;
int main()
{
    int height = 5;
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        cout << "M";
        for (j = 0; j <= height; j++)
        {
            if (j == height)
                cout << "M";
            else if (j == counter || j == height - counter - 1)
                cout << "M";
            else
                cout << " ";
        }
        if (counter == height / 2)
        {
            counter = -99999;
        }
        else
            counter++;
        cout << "\n";
    }
    return 0;
}