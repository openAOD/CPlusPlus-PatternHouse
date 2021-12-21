#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<i<<" ";
        }
        for(int j=i; j<n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
