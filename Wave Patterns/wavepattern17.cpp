#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int height = 5, length = 4;
    int inSpace = 1, outSpace = 2;
    int inc = 1, num = height;
    int jump = (height * 3) - (height + 1);

    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            for(int k = 1; k <= outSpace; k++)
                cout << " ";
            cout << setfill('0') << setw(2) << num;
            
            for(int k = 1; k <= inSpace; k++)
                cout << " ";
            num += inc;
            cout << setfill('0') << setw(2) << num;
            
            for(int k = 1; k <= outSpace; k++)
                cout << " ";
            cout << " ";
            num += jump;
        }
        
        outSpace = (i + 1 != height);
        inSpace = (i + 1 != height) ? 3 : 5;
        num = height - i;
        inc += 2;
        jump -= 2;
        cout << endl;
    } 
    return 0;
}