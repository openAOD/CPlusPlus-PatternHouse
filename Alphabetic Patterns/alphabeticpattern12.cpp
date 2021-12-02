#include <bits/stdc++.h>
using namespace std;

int main() {
    
    for (int j=4;j>=0;j--)
    {
        for (int i=5;i>=j+1;i--)
        {
            char x = (char) j+65;
            cout << x << " ";
        }
       cout << "\n";
    }
        
    return 0;
}