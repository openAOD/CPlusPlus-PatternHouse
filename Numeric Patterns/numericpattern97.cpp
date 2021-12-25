
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
        for (int k = 1; k <= c; k++)
        {
            cout << i;
        }
        c = c + 2;
        cout << endl;
    }

    return 0;
}