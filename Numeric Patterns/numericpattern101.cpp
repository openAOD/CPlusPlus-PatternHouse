#include <iostream>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<n+1; i++){
        for(int j=0; j<n-i; j++){
            cout<<"  ";
        }
        for(int j=0; j<(2*i)-1; j++){
            cout<<n-i+1<<" ";
        }
        cout<<endl;
    }
}
