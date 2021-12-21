#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            if(j==n-i)
                cout<<"*"<<" ";
            else
                cout<<j<<" ";
        }
        cout<<endl;
    }
}
