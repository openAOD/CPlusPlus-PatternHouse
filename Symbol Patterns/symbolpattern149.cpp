#include <iostream>
using namespace std;

int main()
{
    int n = 8, x = (n-1)/2;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i + j >= 3*n/2 - 1 || i + j <= x || i - j >= x || j - i >= x)
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << "\n";
    }
    
    return 0;
}