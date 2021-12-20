#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    int k=1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=1; j<=n; j++){
                cout<<j<<"  ";
            }
        }
        else{
            for(int j=n; j>0; j--){
                cout<<j<<"  ";
            }
        }
        cout<<endl;
    }
}
