
#include <iostream>

using namespace std;

int main()
{
    int c = 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << " ";
        }
        for (int j = i; j <= c; j++)
        {
            cout << j;
        }
        for (int j = i; j <= c; j++)
        {
            cout << (char)(j + 64);
        }
        cout << endl;
        c = c + 2;
    }

    return 0;
}