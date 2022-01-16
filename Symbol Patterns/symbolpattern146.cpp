#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n; j++) {
            if((j >= x && j <= 2*n - x) || j <= n - x + 1 || j >= n + x - 1)
                cout << "*";
            else 
                cout << " ";
        }
        x--;
        cout << "\n";
    }
    
    return 0;
}