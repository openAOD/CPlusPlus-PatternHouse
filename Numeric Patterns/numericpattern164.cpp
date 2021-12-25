#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = i; j >= 1; j--)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    return 0;
}