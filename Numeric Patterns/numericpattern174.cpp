#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1)
                cout << j << " ";
            else
                cout << (i + 1 - j) << " ";
        }
        cout << endl;
   }
   return 0;
}