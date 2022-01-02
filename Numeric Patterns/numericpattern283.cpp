#include <iostream>
using namespace std;

int main()
{
    
    int size=5;
    int flag=size/2;;
    
    for(int i=0; i<size;i++){
        
        //Middle row of numbers
        if(i==size/2){
            for(int j=1;j<4;j++)
                cout<<j<<" ";
            cout<<endl;
        }
        
        //Upper half of stars
        else if(i<size/2){
            for(int j=0;j<=i;j++)
                cout<<"*"<<" ";
            cout<<endl;
        }
        
        //Lower half of stars
        else{
            for(int j=0;j<flag;j++)
                cout<<"*"<<" ";
            flag--;
            cout<<endl;
        }
        
    }
    
    return 0;
}
