#include <iostream>
using namespace std;

int main()
{
    int size=5;
    int top=0;
    int bottom=size-1;
    
    for(int i=0;i<5;i++){
        
        if(i%2==0){
            for(int j=0;j<5;j++)
                cout<<"*"<<" ";
            cout<<endl;
        }
        
        else{
            if(i==top+1){
                cout<<"*"<<endl;
                continue;
            }
            else if(i==bottom-1){
                for(int j=0;j<5;j++)
                    if(j==size-1 || j==0)
                        cout<<"*"<<" ";
                    else
                        cout<<" "<<" ";
            cout<<endl;
            }
        }
    }
    
    return 0;
}
