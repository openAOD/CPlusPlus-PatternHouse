#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;
    int k=1;
    bool star=true;

    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            if(star==true){
                cout<<"*"<<" ";
                star=false;
            }
            else{
                cout<<k++<<" ";
                star=true;
            }
        }
        cout<<endl;
    }
}
