#include <bits/stdc++.h>
using namespace std;

int main() {

    
    for (int j=4;j>=0;j--)            //outer 5 iterations in reverse direction so that it starts with E
    {   
        int k= j;
                                     //loop for number of spaces, no.of spaces at jth iteration would be |j-4| 
        while(k)                     //but since we are reversing array it would be j
        {
            cout << "  ";
            k--;
        }
        for (int i=4;i>=j;i--)        //starting from E, (j+1 (i.e E when j=4))th character j-3 times at each step (since j is in reverse direction)  
        {
            char x = (char) j+65;
            cout << x << " ";
        }
        cout << "\n";
    }
        
    return 0;
}