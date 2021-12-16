#include <iostream>

using namespace std;

int main()
{
    int c = 5;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << " ";
        }
        for (int k = c; k <= 5; k++)
        {
            cout << k;
        }
        cout << endl;
        c--;
    }

    return 0;
}