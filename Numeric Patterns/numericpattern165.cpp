#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << ch++;
            }
            else
            {
                cout << c++;
            }
        }
        cout << endl;
    }

    return 0;
}