#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n = n1 + n2;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << setw(4) << n;
            n = n1 + n2;
            n1 = n2;
            n2 = n;
        }
        cout << endl;
   }
   return 0;
}