#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=3;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
