#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
    return 0;
}
