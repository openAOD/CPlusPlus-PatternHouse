#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((i + j) % 2 == 1)
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << "\n";
    }
    
    return 0;
}