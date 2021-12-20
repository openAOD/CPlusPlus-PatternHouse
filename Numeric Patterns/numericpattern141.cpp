#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=0; j<n/2; j++){
            cout<<0<<" ";
        }
        for(int j=0; j<=n/2; j++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
}
