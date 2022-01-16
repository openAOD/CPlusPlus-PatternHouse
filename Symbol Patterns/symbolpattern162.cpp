#include <iostream>
using namespace std;

int main()
{
    int n = 3, x = 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = n - 1; j > 0; j--) {
            for(int s = n - 1; s >= i; s--)
                cout << "  ";
                
            for(int k = 0; k < x; k++) 
                cout << "* ";
                
            cout << "\n";
        }
        x += 2;
    }
    
    return 0;
}