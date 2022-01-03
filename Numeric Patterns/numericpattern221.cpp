#include <iostream>
using namespace std;

int main()
{
   int n = 5, num = 1, k = 1;
   char ch = 'A';
   
   for(int i = 1; i <= n; i++) {
        for(int s = n - 1; s >= i; s--)
            cout << "  ";
            
        for(int j = 1; j <= k; j++) {
            if(i % 2 == 0)
                cout << ch++ << " ";
            else
                cout << num++ << " ";
                
            num = (num > 9) ? 1 : num;
            ch = (ch > 'Z') ? 'A' : ch;
        }
        k += 2;
        cout << endl;
   }
   return 0;
}