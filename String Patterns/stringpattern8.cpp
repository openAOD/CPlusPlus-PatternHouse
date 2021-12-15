#include <iostream>
using namespace std;

int main(){

    int n=5;
    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 && j==0){
                cout<<ch<<" ";
                ch='A'+(n*n-1);
            }
            else{
                cout<<ch<<" ";
                ch--;
            }
        }
        cout<<endl;
    }
}
