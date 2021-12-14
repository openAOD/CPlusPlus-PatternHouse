#include <iostream>
using namespace std;

int main(){

    int n=5;
    char ch='A';
    for(int i=1; i<n+1; i++){
        if(i==(n+1)/2){
            char c='A';
            for(int j=0; j<n; j++)
                cout<<c++<<" ";
            cout<<endl;
            ch++;
        }
        else{
            for(int j=0; j<(n+1)/2; j++){
                cout<<" ";
            }
            cout<<" "<<ch++<<endl;
        }
    }
}
