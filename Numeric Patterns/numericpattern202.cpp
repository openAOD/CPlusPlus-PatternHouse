#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            if(i % 2 != 0) 
                cout << char(j+64) << " ";
            else
                cout << j << " ";
        }
        cout << endl;
   }
   return 0;
}