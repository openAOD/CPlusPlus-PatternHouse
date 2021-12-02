#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int count=0;
    for (int j=0;j<5;j++)  // for 5iterations
    {
        for (int i=0;i<=j;i++)   //limiting value at each step
        {
            char x = (char) count+65; //change number to char
            cout << x << " ";
            count+=1;   //for next alphabet
        }
       cout << "\n";
    }
        
    return 0;
}