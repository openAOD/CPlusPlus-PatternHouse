#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) 
            cout << "* ";
            
        for(int k = 1; k < 2 * i; k++) {
            if(k <= i)
                cout << x - i + k << " ";
            else 
                cout << x + i - k << " ";
        }
        
        for(int j = 1; j <= n - i; j++)
            cout << "* ";
        
        x += 2;
        cout << endl;
    }
    return 0;
}
