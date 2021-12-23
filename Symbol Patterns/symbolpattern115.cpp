#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = 5, y = 5;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < n*2; j++) {
            if(j == x || j == y || i == n)
                cout << "*";
            else 
                cout << " ";
        }
        
        x--;
        y++;
        cout << endl;
    }
    
    return 0;
}
