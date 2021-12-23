#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height = 5;
    int space = height - 1, x = 1;
    
    for(int i = 0; i < height; i++) {
        for(int j = space; j > i; j--)
            cout << " ";
            
        for(int k = 0; k <= i; k++)
            cout << "* ";
            
        for(int j = 2*height - 2; j >= x; j--)
            cout << " ";
        
        for(int k = 0; k <= i; k++)
            cout << "* ";
        
        x += 2;
        cout << endl;
    }
    return 0;
}
