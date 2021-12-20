#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    int k=1, a[n][n];
    for(int i=0; i<=n/2; i++){
        for(int j=0; j<n; j++){
            a[i][j]=k++;
        }
        for(int j=0; j<n; j++){
            a[n-i-1][j]=k++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
