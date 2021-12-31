#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, x = 1, y = n, n1, n2, d1, d2;
    for(int i = n; i >= 1; i--) {
        n1 = x;
        n2 = y;
        d1 = i;
        d2 = i + 1;
        
        for(int s = 1; s < i; s++) 
            cout << setw(3) << " ";
            
        for(int j = n; j >= i; j--){
            if((i + j) % 2 == 0)
                cout << setw(3) << n1;
            else
                cout << setw(3) << n2;
            n1 = n1 - d1++;
            n2 = n2 - d2++;
        }
        y += i - 1;
        x += i;
        cout << endl;
   }
   return 0;
}