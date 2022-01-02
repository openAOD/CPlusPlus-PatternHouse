#include <iostream>
using namespace std;

int main()
{
   int n = 5;
   for(int i = 1; i <= n; i++) {
        for(int s = n - 1; s >= i; s--)
            cout << "  ";
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 1)
                cout << char(j + 64) << " ";
            else
                cout << j << " ";
       }
       cout << endl;
   }
   return 0;
}