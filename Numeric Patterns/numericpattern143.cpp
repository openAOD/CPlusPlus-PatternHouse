#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<1<<" ";
        }
        for(int j=i; j<n-1; j++){
            cout<<0<<" ";
        }
        cout<<endl;
    }
}
