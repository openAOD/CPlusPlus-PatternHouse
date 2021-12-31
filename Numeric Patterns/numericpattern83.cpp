#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, x = 1, y, num;
    for(int i = n; i >= 1; i--) {
        y = i;
        num = x;

        for(int s = 1; s < i; s++) 
            cout << setw(3) << " ";
            
        for(int j = n; j >= i; j--){
            cout << setw(3) << num;
            num -= y;
            y++;
        }
        x+= i;
        cout << endl;
   }
   return 0;
}