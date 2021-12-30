#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    for(int i = 0; i < 5; i++) {
        for(int j = 4; j > i; j--) 
            cout << "  ";
        
        for(int j = x; j >= 1; j--)
            cout << j << " ";
        
        x += 2;
        cout << endl;
   }
   return 0;
}