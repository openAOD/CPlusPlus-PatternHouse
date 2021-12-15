#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=3;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        int p=pow(2,i), sum=0;
        for(int j=0; j<p; j++){
            sum+=(k+(2*j));
        }
        for(int j=0; j<floor(p/2); j++){
            cout<<k<<" ";
            k+=2;
        }
        if(sum>1)
            cout<<sum<<" ";
        for(int j=p/2; j<p; j++){
            cout<<k<<" ";
            k+=2;
        }

        cout<<endl;
    }
}
