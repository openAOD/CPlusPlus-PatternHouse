#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++)
        if(n%i==0)
            return false;

    return true;
}

int main(){

    int n=5;

    int k=2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            while(!isPrime(k)){
                k++;
            }
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
