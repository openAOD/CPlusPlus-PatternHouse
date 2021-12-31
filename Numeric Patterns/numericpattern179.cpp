#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 0)
                cout << "* ";
            else
                cout << i << " ";
        }
        cout << endl;
   }
   return 0;
}