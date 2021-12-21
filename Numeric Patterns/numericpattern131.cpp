#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=n; i+=2){
        for(int j=0; j<n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    for(int i=2; i<=n; i+=2){
        for(int j=0; j<n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
