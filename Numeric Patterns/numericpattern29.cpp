#include <iostream>

using namespace std;

int main()
{
    int c = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = c; j <= 5; j++)
        {
            cout << j;
        }
        c--;
        cout << endl;
    }

    return 0;
}