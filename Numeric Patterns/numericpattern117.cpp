#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=3;

    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=n; i>=0; i--){
        for(int j=n-i; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
