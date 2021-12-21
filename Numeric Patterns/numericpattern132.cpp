#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<(2*j)-1<<"  ";
        }
        for(int j=1; j<=i-1; j++){
            cout<<(2*j)-1<<"  ";
        }
        cout<<endl;
    }
}
