#include <iostream>
using namespace std;

int main(){

    int n=5;

    for(int i=1; i<n+1; i++){
        char ch='A';
        for(int j=0; j<i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    for(int i=1; i<n+1; i++){
        char ch='A';
        for(int j=0; j<n-i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
