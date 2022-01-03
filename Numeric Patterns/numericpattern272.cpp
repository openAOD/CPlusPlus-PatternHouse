#include <iostream>
using namespace std;

void printTriangle(int n){
    
    for(int i=0;i<3;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    
    int size=2;
    
    for(int i=1; i<size+1; i++){
        printTriangle(i);
    }
    
    return 0;
}
