#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*x; j++) {
            if(j <= x)
                cout << char(j + 64) << " ";
            else
                cout << char(2*x - j + 64) << " ";
        }
        if(i <= n/2)
            x++;
        else
            x--;
        cout << endl;
    }
    return 0;
}