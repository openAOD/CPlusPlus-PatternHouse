#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int x = n/2, y = n/2;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < n; j++) {
            if((i == 1 || i == n) && j == n/2)
                cout << "*";
            else if(j == x || j == y)
                cout << "-";
            else 
                cout << " ";
        }
        
        if(i == n/2) 
            swap(x, y);
        else {
            x--;
            y++;
        }
        
        cout << endl;
    }
    return 0;
}
