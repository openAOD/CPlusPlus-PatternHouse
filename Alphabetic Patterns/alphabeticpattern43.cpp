#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=4;i>=0;i--){    //for reverse order (E to A)
        int k=4-i;
        while (k--)         //for spaces before first character
        {
            cout<<"  ";
        }
        
        for (int j = 0; j < 2*i+1; j++) //odd number of chars at each row
        {
            char a=65+i;                 // the character at each row
            cout<<a<<" ";
        }
        cout<<endl;
    }
 return 0;
}
