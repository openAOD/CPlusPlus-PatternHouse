#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, x = 1, y;
    for(int i = 1; i <= n; i++) {
        y = x + i;
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1)
                cout << setw(2) << (x + j - 1);
            else
                cout << setw(2) << (y - j);
            if(j != i + 1)
                cout << "#";
        }
        x += i;
        cout << endl;
   }
   return 0;
}