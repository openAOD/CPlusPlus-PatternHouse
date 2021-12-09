#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=4;i>=0;i--){    //for 5 line of output i is 4
        int j=4-i;            //for number of spaces before first character
        while(j--){
            cout<<" ";
        }
        for (int k = i ; k>=0; k--)
        {
            char a=65+k;      // ascii value of A is 65
            cout<<a<<" ";
        }
        cout<<"\n";
    }
 return 0;
}
