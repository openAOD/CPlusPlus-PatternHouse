#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= c; k++)
        {
            cout << i;
        }
        cout << endl;
        c++;
    }

    return 0;
}