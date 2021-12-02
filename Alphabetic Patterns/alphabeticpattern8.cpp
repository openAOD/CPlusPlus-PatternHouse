#include <bits/stdc++.h>
using namespace std;

int main() {


    for (int j=4;j>=0;j--)
    {
       for (int i=0;i<5;i++)
       {
           int c= j+i*5;
           char x = (char) c+65;
           cout << x << " ";
       }
       cout << "\n";
    }
        
    return 0;
}