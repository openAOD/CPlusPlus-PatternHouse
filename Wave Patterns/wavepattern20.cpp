#include <iostream>
using namespace std;

int main() 
{
    int height = 5, length = 4;
    int inSpace = 1, outSpace = 2;
    int inc = 1;
    int jump = (height * 3) - (height + 1);
    int ch = 'Z' - height + 1;
    
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            for(int k = 1; k <= outSpace; k++)
                cout << " ";
            cout << char(ch);
            
            for(int k = 1; k <= inSpace; k++)
                cout << " ";
            ch -= inc;
            
            if(ch < 'A')
                ch = ch + 26;
            cout << char(ch);
            
            for(int k = 1; k <= outSpace; k++)
                cout << " ";
                
            cout << " ";
            ch -= jump;
            if(ch < 'A')
                ch = ch + 26;
        }
        
        outSpace = (i + 1 != height);
        inSpace = (i + 1 != height) ? 3 : 5;
        ch = 'Z' - height + i + 1;
        inc += 2;
        jump -= 2;
        cout << endl;
    } 
    return 0;
}