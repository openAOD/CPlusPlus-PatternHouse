#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != n - 1)
        {
            cout << "U";
        }
        else
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            if (((i == n - 1) && j >= 0&& j < n - 1))
            {
                cout << "U";
            }
            else if (j == n - 1 && i != 0 && i != n - 1)
            {
                cout << "U";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}