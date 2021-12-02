#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int count=0;
    for(char i='A';i<='Y';i++)
    { 
        cout<< i <<" " ;
        count++;
        if(count%5==0)
            cout<< "\n";
    }
        
    return 0;
}