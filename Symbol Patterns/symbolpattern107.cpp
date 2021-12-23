#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height = 5, stars = 1;
    int space = height - 1, x = 1;
    
    for(int i = 1; i < height; i++) {
        for(int j = space; j > i; j--)
            cout << " ";
            
        for(int k = 1; k <= stars; k++)
            cout << "*";
            
        for(int j = 2*height - 3; j > x; j--)
            cout << " ";
        
        for(int k = 1; k <= stars; k++)
            cout << "*";
            
        stars += 2;
        x += 2;
        cout << endl;
    }
    return 0;
}
