#include <iostream>
using namespace std;

int main()
{
    
    int size=5;
    
    for(int i=0;i<size;i++){
        if(i%2==0){
            for(int j=0;j<size;j++){
                cout<<"*"<<" ";
            }    
            cout<<endl;
        }
            
        else{
             for(int j=0;j<size;j++){
                if(j==0 || j==size-1)
                    cout<<"*"<<" ";
                else
                    cout<<" "<<" ";
            }    
            cout<<endl;
        }
    }
    
    return 0;
}
