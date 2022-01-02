#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n = 5, num = 1;
   for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n || j == n || j == n - i + 1)
                cout << setw(2) << num++<< " ";
            else
                cout << "   ";
        }
        cout << endl;
   }
   return 0;
}