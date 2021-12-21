#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int height = 5, length = 2;
    
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            if(i != height)
                cout << "##";
            else
                cout << "  "; 
            
            for(int k = 1; k <= 4; k++) {
                if(i == 1 || k == 1 || k == 4) 
                    cout << "  ";
                else
                    cout << "##";
            }
            
            if(i != height)
                cout << "##";
            else
                cout << "  ";
        }
        cout << endl;
    } 
    return 0;
}