#include <iostream>

using namespace std;

int main()
{
    int N = (5 * 6) / 2;
    int fib[N];
    fib[0] = 0, fib[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 1; i <= 5; i++)
    {
        int ind = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << fib[ind++];
        }
        cout << endl;
    }

    return 0;
}