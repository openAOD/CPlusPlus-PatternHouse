#include <iostream>

using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)

                cout << "* ";
            else
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}