#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int size = 2*(n*(n+1)/2), x = 1, y;
    
    for(int i = 1; i <= n; i++) {
        y = size - n + i;
        for(int j = 1; j <= 2*n; j++) {
            if(j > 2 * (i - 1)) {
                if(j <= (2*n)/ 2 + i - 1) {
                    cout << setw(3) << x;
                    x++;
                }
                else {
                    cout << setw(3) << y;
                    y++;
                }
            }
            else
                cout << setw(3) << "_";
        }
        cout << endl;
        size -= (n - i + 1);
    }
    return 0;
}
