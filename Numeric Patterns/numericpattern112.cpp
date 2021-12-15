#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=3;

    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=0; j<(2*i)-1; j++){
            cout<<k*k<<" ";
            k++;
        }

        cout<<endl;
    }
}
