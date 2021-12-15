#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=0; j<i; j++){
            cout<<pow(2,j)<<" ";
        }
        for(int j=i; j>=0; j--){
            cout<<pow(2,j)<<" ";
        }
        cout<<endl;
    }
}
