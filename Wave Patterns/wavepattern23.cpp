#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int height = 4, length = 3;
    int num = height + 1, inc = 1, x = 0;
    int jump = (num*3 + 2) - (num + 3);
    
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            if(i != height)
                cout << "   ";
            else
                cout << setfill('0') << setw(2) << num - 1 << " "; 
            
            for(int k = 1; k <= 4; k++) {
                if(i == 1 || k == 1 || k == 4) {
                    cout << setfill('0') << setw(2) << num << " "; 
                    num += inc;
                }
                else
                    cout << "   ";
            }
            num -= inc;
            
            if(i != height)
                cout << "   ";
            else
                cout << setfill('0') << setw(2) << num + 1 << " ";
            num += jump;
        }
        jump -= 2;
        inc = 5 + x;
        x += 2;
        num = height - i + 1;
        
        cout << endl;
    } 
    return 0;
}