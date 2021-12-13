#include <iostream>
using namespace std;

int main(){

    int n=5;
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        for(int j=0; j<n-i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
