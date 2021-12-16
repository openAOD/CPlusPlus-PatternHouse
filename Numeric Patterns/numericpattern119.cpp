#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=4;

    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
