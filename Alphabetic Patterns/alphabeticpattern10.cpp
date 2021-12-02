#include <bits/stdc++.h>
using namespace std;

int main() {
    
    for (int j=1;j<=5;j++)
    {
        for (int i=1;i<j+1;i++)
        {
            char x = (char) (i-1)+65;
            cout << x << " ";
        }
       cout << "\n";
    }
        
    return 0;
}