#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, x = 1, y, t = 1;
    for(int i = 1; i < n; i++) {
        y = t;
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1)
                cout << setw(2) << x;
            else
                cout << setw(2) << y;
            if(j != i)
                cout << setw(2) << "*";
            x++;
            y--;
        }
        t += i + 1;
        cout << endl;
   }
   return 0;
}