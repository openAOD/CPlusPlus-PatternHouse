#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<n-i+1<<" ";
        }
        for(int j=i; j<n; j++){
            cout<<char(ch+i-1)<<" ";
        }
        cout<<endl;
    }
}
