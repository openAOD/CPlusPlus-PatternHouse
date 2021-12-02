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
        for (int i=0;i<=j;i++)          //loop to print first j+1 characters in reverse direction in each iteration
        {
            char x = (char) (j-i)+65;
            cout << x << " ";
        }
       cout << "\n";
    }
        
    return 0;
}