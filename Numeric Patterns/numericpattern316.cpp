#include <iostream>
using namespace std;

int main()
{
    int size=5;
    int chr=size-1;
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            
            //Print first row
            if(i==0){
               cout<<"*"<<" "; 
            }
            
            //Print subsequent rows
            else{
                
                if(j==chr)
                    cout<<"*"<<" ";
                    
                else
                    cout<<" "<<" ";
            }
        }
        chr--;
        cout<<endl;
    }

    return 0;
}
