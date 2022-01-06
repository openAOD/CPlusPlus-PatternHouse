#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = n/2, y = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) 
            cout << "  ";

        for(int k = 1; k <= y; k++)
            cout << k << " ";

        if(i <= n/2) {
            x--;
            y += 2;
        }
        else {
            x++;
            y -= 2;
        }
        cout << endl;
    }
    return 0;
}