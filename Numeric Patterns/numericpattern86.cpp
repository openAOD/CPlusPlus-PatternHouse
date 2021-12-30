#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, x = n, y, num;
    for(int i = n; i >= 1; i--) {
        num = x;
        y = i + 1;
        
        for(int s = 1; s < i; s++) 
            cout << setw(3) << " ";
            
        for(int j = n; j >= i; j--){
            cout << setw(3) << num;
            num -= y;
            y++;
        }
        x += i - 1;
        cout << endl;
   }
   return 0;
}