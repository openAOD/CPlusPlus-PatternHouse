#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){   
        int k=4-i;
        while (k--)         //for spaces before first character
        {
            cout<<"  ";
        }
        
        for(int j=1;j<=i;j++){
            char a=64+j;
            cout<<a<<" ";
        }
        for (int j = i; j>=0; j--)
        {
            char a=65+j;
            cout<<a<<" ";
        }
        cout<<endl;
    }
 return 0;
}
