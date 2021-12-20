#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;
    int arr[n][n];
    int x=1, y=n;
    while(y>0){
        for(int i=x-1; i<n; i++){
            for(int j=0; j<y; j++)
                arr[i][j]=y;
        }
        x++; y--;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
