#include <iostream>
using namespace std;

int main(){

    int n=4;
    int height=n-1, length=n, pc=n-1;

    for(int i=0; i<height+1; i++){
        for(int j=0; j<(2*height*length) +1; j++){
            if ((j % (height * 2) == pc) || (j % (height * 2) == height + i)){
                char ch='z'-j;
                cout<<ch<<" ";
            }
            else
                cout<<"  ";
        }
        pc -= 1;
        cout<<endl;
    }
}
