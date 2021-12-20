#include <iostream>

using namespace std;

int main()
{
    bool flag;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= 5; j++)
                cout << '0';
        }
        else
        {
            flag = true;
            for (int j = 1; j <= 5; j++)
            {
                if (flag == true)
                    cout << '1';
                else
                    cout << '0';
                flag = !flag;
            }
        }
        cout << endl;
    }

    return 0;
}