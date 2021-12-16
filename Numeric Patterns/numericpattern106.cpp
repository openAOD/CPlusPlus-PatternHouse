#include <iostream>
using namespace std;

int main(){

    int n=5;

    int k=1;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<i; j++){
            cout<<j<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
