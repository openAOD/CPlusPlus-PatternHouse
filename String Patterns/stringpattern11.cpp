#include <iostream>
using namespace std;

int main(){

    int n=5;
    char ch='A';
    ch+=((n*(n+1))/2) -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
}
