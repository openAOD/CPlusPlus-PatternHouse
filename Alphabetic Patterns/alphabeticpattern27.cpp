#include <bits/stdc++.h>
using namespace std;

int main() {
    
    for (int j=4;j>=0;j--)            //outer 5 iterations
    {   
        int k= 4-j;
        while(k)                      //loop for number of spaces, no.of spaces at jth iteration would be |4-j|
        {
            cout << "  ";
            k--;
        }
        for (int i=0;i<=j;i++)          //loop to print  j+1th  character j-3times in each iteration
        {                               //note this unusal change is due to reverse of outer loop
            char x = (char) j+65;       
            cout << x << " ";
        }
       cout << "\n";
    }
        
    return 0;
}