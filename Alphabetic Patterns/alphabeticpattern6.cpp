#include <bits/stdc++.h>
using namespace std;

int main() {
    

    for (int j=0;j<5;j++)
    {
        for(char i='A';i<='E';i++)
        { 
            char x= char(i+j);
            cout<< x <<" ";

        }
        cout << "\n";
    }
        
    return 0;
}