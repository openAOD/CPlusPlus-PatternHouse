#include <iostream>

using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << j;
            }
            else
            {
                cout << 6 - j;
            }
        }
        cout << endl;
    }

    return 0;
}