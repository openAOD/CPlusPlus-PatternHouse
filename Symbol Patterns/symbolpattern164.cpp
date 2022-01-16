#include <iostream>
using namespace std;

int main()
{
    int n = 3, c1 = n*2 - 1, c2 = 3;
    
    for(int i = 1; i <= n; i++) {
        for(int j = n - 2; j < i; j++)
            cout << "    ";
            
        for(int k = 1; k <= c1; k++)
            cout << "* ";
            
        c1 -= 2;
        cout << "\n";
    }
    for(int i = 1; i < n; i++) {
        for(int j = n - 2; j >= i; j--)
            cout << "    ";
            
        for(int k = 1; k <= c2; k++)
            cout << "* ";
            
        c2 += 2;
        cout << "\n";
    }
    
    return 0;
}