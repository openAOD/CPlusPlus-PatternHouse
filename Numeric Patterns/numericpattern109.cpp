#include <iostream>
using namespace std;

int main(){

    int n=5;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=n-i; j<n; j++){
            cout<<j<<" ";
        }
        for(int j=n; j>=n-i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
