#include <iostream>
using namespace std;

int main(){

    int n=4;

    for(int i=1; i<n+1; i++){
        for(int j=0; j<i+1; j++){
            cout<<"  ";
        }
        for(int j=i; j<=(2*n)-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"  ";
        }
        for(int j=n-i; j<=n+i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
