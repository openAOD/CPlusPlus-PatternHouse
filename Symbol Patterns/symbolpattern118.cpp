#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = 1, y = 2*n - 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n; j++) {
            if(j == x || j == y || i == 1)
                cout << "*";
            else 
                cout << " ";
        }
        x++;
        y--;
        cout << endl;
    }
    
    return 0;
}
