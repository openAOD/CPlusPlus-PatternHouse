#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    
    for(int i = n; i >= 1; i--) {
        for(int j = n - 1; j > 0; j--) {
            for(int k = 0; k < i; k++) 
                cout << "* ";
                
            cout << "\n";
        }
    }
    
    return 0;
}