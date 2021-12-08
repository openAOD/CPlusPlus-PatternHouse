#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int a = 2;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << a << " ";
            a+=2;
        }
        cout << endl;
    }
    return 0;
}