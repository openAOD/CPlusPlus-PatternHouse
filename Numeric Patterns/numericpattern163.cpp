#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                cout << j * 2 << " ";
            else
            {
                cout << c << " ";
                c += 2;
            }
        }
        cout << endl;
    }

    return 0;
}