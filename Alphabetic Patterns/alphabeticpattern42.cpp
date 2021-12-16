#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<5;i++){   
        int k=4-i;
        while (k--)         //for spaces before first character
        {
            cout<<"  ";
        }
        
        for(int j=1;j<=i;j++){         //for left wedge of pyramind
            char a=64+j+i;             // same as 41 but next characters at every row.
            cout<<a<<" ";
        }
        for (int j = i; j>=0; j--)   //for right wedge of pyramid
        {
            char a=65+j+i;
            cout<<a<<" ";
        }
        cout<< endl;
    }
 return 0;
}
