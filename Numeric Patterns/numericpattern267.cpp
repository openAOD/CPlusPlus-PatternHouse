#include <iostream>
using namespace std;

int main()
{
    int n = 4, num = 1;
    for(int i = n; i >= -n; i--) {
        for(int j = 1; j <= abs(i); j++) 
            cout << "  ";
        
        if(i >= 0) 
            num = 1;
        else 
            num = abs(i) + 1;
        
        for(int k = n; k >= abs(i); k--)
            cout << num++ << "   ";
            
        cout << endl;
    }
    return 0;
}