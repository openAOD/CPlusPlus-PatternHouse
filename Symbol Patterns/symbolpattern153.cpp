#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = n; j > i; j--) 
            cout << "  ";
            
        for(int k = 1; k < n; k++)
            cout << "* ";
        
        cout << "\n";
    }
    
    return 0;
}