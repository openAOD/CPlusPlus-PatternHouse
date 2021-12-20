#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;
    int arr[n][n];
    int x=n, y=1;
    while(y<=n){
        for(int i=0; i<x; i++){
            for(int j=y-1; j<n; j++)
                arr[i][j]=y;
        }
        x--; y++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
