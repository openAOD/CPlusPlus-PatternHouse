#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<"*"<<" ";
        }
        for(int j=0; j<=n-i; j++){
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }
}
