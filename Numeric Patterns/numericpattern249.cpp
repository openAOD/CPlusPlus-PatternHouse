#include <iostream>
using namespace std;

int main()
{
   int n = 5;
   for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 && j != 1) 
                cout << (n*3 - j - 1) << " ";
            else if(j == 1)
                cout << i << " ";
            else if(j == n - i + 1)
                cout << (n*2) - n + j - 1 << " ";
            else
                cout << "   ";
        }
        cout << endl;
   }
   return 0;
}