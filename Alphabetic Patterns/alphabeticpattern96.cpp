
#include <iostream>

using namespace std;

int main()
{
    int c = 1, k = 1;
    char ch = 'A';

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= (5 - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 == 0)
            {
                cout << ch++;
            }
            else
            {
                cout << c++;
            }
            if (c > 9)
                c = 1;
        }
        k = k + 2;
        cout << endl;
    }

    return 0;
}