#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){   //for 5 lines of output i is 5
        int k=i;
        while (k--)         //for spaces before first character
        {
            cout<<" ";
        }
        
        for (int j = 0; j < 5-i; j++)
        {
            char a=65+j;
            cout<<a<<" ";
        }
        cout<<endl;
    }
 return 0;
}
