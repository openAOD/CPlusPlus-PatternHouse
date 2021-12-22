#include <iostream>
using namespace std;

int main()
{
    int height = 5, x = 1;
    
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= height; j++) 
            cout << " ";
            
        for(int k = height - 1; k >= i; k--)
            cout << " ";
            
        for(int j = 1; j <= i; j++)
            cout << "* ";
        
        cout << endl;
    }
    
    for(int i = 0; i < height; i++) {
        for(int j = height - 1; j > i; j--) 
            cout << " ";
            
        for(int k = 0; k <= i; k++)
            cout << "* ";
            
        for(int j = 2*height - 1; j > x; j--)
            cout << " ";
        
        for(int k = 0; k <= i; k++)
            cout << "* ";
            
        x += 2;
        cout << endl;
    }
    return 0;
}
