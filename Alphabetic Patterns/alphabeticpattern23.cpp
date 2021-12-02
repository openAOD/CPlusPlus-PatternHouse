#include <bits/stdc++.h>
using namespace std;

int main() {

    
    for (int j=0;j<5;j++)            //outer 5 iterations
    {   
        int k= 4-j;
        while(k)                      //loop for number of spaces, no.of spaces at jth iteration would be |j-4|
        {
            cout << "  ";
            k--;
        }
        for (int i=0;i<=j;i++)          //loop to  jth character, j times in each iteration
        {
            char x = (char) j+65;
            cout << x << " ";
        }
       cout << "\n";
    }
        
    return 0;
}