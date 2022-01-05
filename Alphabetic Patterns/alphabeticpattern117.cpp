#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = 1, y = n/2;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= y; j++) 
            cout << "  ";

        for(int k = x; k >= 1; k--)
            cout << char(k + 64) << " ";

        if(i <= n/2) {
            x += 2;
            y--;
        }
        else {
            x -= 2;
            y++;
        }
        cout << endl;
    }
    return 0;
}