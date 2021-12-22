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

        int n = c;
        while (n > 0)
        {
            cout << n % 10;
            n = n / 10;
        }

        cout << endl;
        c = c * 11;
    }

    return 0;
}