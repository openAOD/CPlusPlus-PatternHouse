#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << (char)(i + 64);
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }

    return 0;
}