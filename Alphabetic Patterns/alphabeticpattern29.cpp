#include <bits/stdc++.h>
using namespace std;

int main() {
    
    for (int j=0;j<=4;j++)            //outer 5 iterations
    {   
        int k= j;
        while(k)                      //loop for number of spaces, no.of spaces at jth iteration would be |4-j|
        {
            cout << "  ";
            k--;
        }
        for (int i=0;i<=(4-j);i++)          //loop to print  jth  character (5-j) times in each iteration
        {                               
            char x = (char) j+65;       
            cout << x << " ";
        }
       cout << "\n";
    }
        
    return 0;
}