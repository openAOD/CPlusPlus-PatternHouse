#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<0<<" ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<(2*i)+j<<" ";
        }
        cout<<endl;
    }
}
