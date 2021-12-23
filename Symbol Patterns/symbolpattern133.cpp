#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == n - i + 1 || j <= i)
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }
    
    return 0;
}