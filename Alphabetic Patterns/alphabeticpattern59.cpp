#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j+ 64);
        }
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}