#include <iostream>

using namespace std;

int main()
{
    int c = 1, n;
    for (int i = 1; i <= 5; i++)
    {

        n = c;
        while (n > 0)
        {
            cout << n % 10 << " ";
            n = n / 10;
        }
        cout << endl;
        c = c * 11;
    }

    return 0;
}