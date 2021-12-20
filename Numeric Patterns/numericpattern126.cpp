#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<j<<"  ";
        }
        for(int j=0; j<i-1; j++){
            cout<<n<<"  ";
        }
        cout<<endl;
    }
}
