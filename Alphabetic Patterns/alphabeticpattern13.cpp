#include <bits/stdc++.h>
using namespace std;

int main() {
    
    for (int j=0;j<5;j++)
    {
        for (int i=j;i>=0;i--)
        {
            char x = (char) i+65;
            cout << x << " ";
        }
       cout << "\n";
    }
        
    return 0;
}