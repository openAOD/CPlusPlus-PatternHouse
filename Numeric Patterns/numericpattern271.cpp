#include <iostream>
using namespace std;

void printTriangle(int n){
    
    for(int i=1;i<4;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" ";
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
