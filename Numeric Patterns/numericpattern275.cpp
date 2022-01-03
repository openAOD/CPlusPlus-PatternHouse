#include <iostream>
using namespace std;

void printTriangle(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

}

int main()
{

    int size=3;

    for(int i=1; i<size+1; i++){
        printTriangle(i);
        cout<<endl;
    }


    return 0;
}