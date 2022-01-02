#include <iostream>
using namespace std;

int main()
{
   int n = 5;
   for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(i == n || j == n || j == n - i + 1)
                cout << j << " ";
            else
                cout << "  ";
        }
        cout << endl;
   }
   return 0;
}