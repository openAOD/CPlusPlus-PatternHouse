
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, c = 1;
    
    for (int i = 1; i <= 5; i++)
    {

        x = c;
        for (int j = 1; j <= 5; j++)
        {
            cout << setw(3) << x;
            x += 2;
        }
        c = c + 2;
        cout << endl;
    }

    return 0;
}