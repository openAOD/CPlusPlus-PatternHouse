#include <iostream>
using namespace std;

int main()
{
    int n = 4, x = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i * 2; j++) {
            if(j <= i)
                cout << j + x << " ";
            else
                cout << (i * 2 - j + x) << " ";
        }
        x += i;
        cout << endl;
   }
   return 0;
}