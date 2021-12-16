#include <iostream>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=2*n; j>=0; j--){
            if(j>=n-i && j<=n+i){
                cout<<j<<"  ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
