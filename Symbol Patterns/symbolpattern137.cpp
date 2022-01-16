#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n || j == 1 || i == j || (i == n - j + 1 && i <= n/2 && j >= n/2))
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << "\n";
    }
    
    return 0;
}