
#include <iostream>

using namespace std;

int main()
{
    int s = 5, e = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = s; j >= e; j--)
        {
            cout << j;
        }
        cout << endl;
        s++;
        e = e + 2;
    }

    return 0;
}