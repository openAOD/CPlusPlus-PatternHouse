#include <iostream>

using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "*";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << (char)(j + 64);
        }

        cout << endl;
    }

    return 0;
}