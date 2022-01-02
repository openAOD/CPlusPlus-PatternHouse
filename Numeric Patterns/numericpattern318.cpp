#include <iostream>
using namespace std;

int main()
{
    
    int size=5;
    int top=0;
    int bottom=size-1;
    
    for(int i=0;i<size;i++){
        if(i%2==0){
            for(int j=0;j<size;j++){
                cout<<"*"<<" ";
            }    
            cout<<endl;
        }
            
        else{
             for(int j=0;j<size;j++){
                if( (i==top+1) && (j==0 || j==size-1 ))
                    cout<<"*"<<" ";
                else if(i==bottom-1 && j==size-1)
                    cout<<"*"<<" ";
                else
                    cout<<" "<<" ";
            }    
            cout<<endl;
        }
    }
    
    return 0;
}
