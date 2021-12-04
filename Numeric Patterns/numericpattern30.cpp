#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 2; i <= 2*n; i+=2)
    {
        for (int j = 2; j <= i; j+=2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}