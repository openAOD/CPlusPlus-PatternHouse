#include <iostream>

using namespace std;

int main()
{
    int c = 9;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << j;
        }
        c -= 2;
        cout << endl;
    }

    return 0;
}