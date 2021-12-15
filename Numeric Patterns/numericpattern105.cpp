#include <iostream>
using namespace std;

int main(){

    int n=5;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
        for(int j=i; j>0; j--){
            cout<<j<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
