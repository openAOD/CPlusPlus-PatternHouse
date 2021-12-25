#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int s = 17, e = 20;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = s; j <= e; j++)
        {
            cout << j << " ";
        }
        e = s - 1;
        s = s - i + 1;
        cout << endl;
    }

    return 0;
}