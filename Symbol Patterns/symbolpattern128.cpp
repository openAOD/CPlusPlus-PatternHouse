#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = n/2 + 1;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n/2 + 1 || (j >= x && j <= n/2 + 1))
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << endl;
        
        if(i <= n/2)
            x--;
        else 
            x++;
    }
    
    return 0;
}
