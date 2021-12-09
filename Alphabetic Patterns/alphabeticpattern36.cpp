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
        
        for (int j = 0; j < 2*i+1; j++)
        {
            char a=65+i;
            cout<<a<<" ";
        }
        cout<<endl;
    }
 return 0;
}
