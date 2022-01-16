#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = n/2; i <= n; i+= 2) {
        for(int j = 1; j < n - i; j += 2)
            cout << " ";
        
        for(int k = 1; k <= i; k++)
            cout << "*";
            
        for(int j = 1; j <= n - i; j++)
            cout << " ";
            
        for(int k = 1; k <= i; k++)
            cout << "*";
            
        cout << "\n";
    }
    for(int i = n; i >= 1; i--) {
        for(int j = i; j < n; j++)
            cout << " ";
            
        for(int k = 1; k <= (i*2) - 1; k++)
            cout << "*";
            
        cout << "\n";   
    }
    return 0;
}