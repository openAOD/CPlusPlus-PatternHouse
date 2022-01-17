#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << "* ";
        
        for(int j = 1; j < 2*i; j++) {
            if(j <= i)
                cout << (x - i + j) << " ";
            else
                cout << (x + i - j) << " ";
        }
        
        for(int s = 1; s <= n - i; s++)
            cout << "* ";
            
        x += 2;
        cout << "\n";
    }
    return 0;
}