#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = 1, y = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j <= x || j >= y)
                cout << char(j + 64) << " ";
            else
                cout << "  ";
        }
        if(i <= n/2) {
            x++;
            y--;
        }
        else {
            x--;
            y++;
        }
        cout << endl;
    }
    return 0;
}