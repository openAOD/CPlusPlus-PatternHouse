#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--){
            cout<<j<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
