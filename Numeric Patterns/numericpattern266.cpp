#include <iostream>
using namespace std;

int main()
{
    int n = 4, num = 1;
    for(int i = n; i >= -n; i--) {
        for(int j = 1; j <= abs(i); j++) 
            cout << "  ";
        
        for(int k = n; k >= abs(i); k--)
            cout << num << "   ";
            
        if(i > 0) 
            num++;
        else 
            num--;
            
        cout << endl;
    }
    return 0;
}