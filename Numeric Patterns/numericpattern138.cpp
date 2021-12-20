#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=4;

    int k=1;
    char ch='a';
    bool dig=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(dig){
                cout<<k++<<" ";
                if(k%10==0)
                    dig=false;
            }
            else{
                cout<<ch++<<" ";
                if(ch=='f')
                    dig=true;
            }
        }
        cout<<endl;
    }
}
