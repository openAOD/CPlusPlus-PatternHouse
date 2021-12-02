#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int a = 1;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a << " ";
            a += n;
        }
        x++;
        a = x;

        cout << endl;
    }

    return 0;
}