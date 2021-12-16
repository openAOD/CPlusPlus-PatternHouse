#include <iostream>

using namespace std;

int main()
{
    bool flag;
    for (int i = 5; i >= 1; i--)
    {
        flag = true;
        for (int j = 1; j <= i; j++)
        {
            if (flag == true)
                cout << '1';
            else
                cout << '0';
            flag = !flag;
        }
        cout << endl;
    }
    return 0;
}