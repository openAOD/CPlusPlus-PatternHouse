#include <iostream>
using namespace std;

int main()
{
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i * 2; j++) {
            if(j <= i)
                cout << j;
            else
                cout << (i*2 - j + 1);
        }
        cout << endl;
   }
   return 0;
}