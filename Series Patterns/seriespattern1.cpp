#include<iostream>
using namespace std;

int main()
{
    int n = 10, a = 4, d = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a + d;
    }
    return 0;
}