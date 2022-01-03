#include <iostream>
using namespace std;

int main()
{
   int n = 5;
   for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j != 0)
                cout << "* ";
            else
                cout << i << " ";
        }
        cout << endl;
   }
   return 0;
}