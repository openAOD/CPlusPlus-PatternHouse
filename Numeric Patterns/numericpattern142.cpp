#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            cout<<0<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<=n/2; i++){
        for(int j=0; j<n; j++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
}
