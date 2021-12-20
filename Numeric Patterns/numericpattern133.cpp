#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<k++<<"  ";
            if(k==9)
                k=1;
        }
        cout<<endl;
    }
}
