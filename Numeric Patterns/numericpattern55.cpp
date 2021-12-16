#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c;
        }
        cout << endl;
        c++;
    }

    return 0;
}