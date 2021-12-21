#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=4;

    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<k++<<" ";
            if(k%8==0)
                k+=2;
        }
        cout<<endl;
    }
}
