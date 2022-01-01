#include <iostream>
using namespace std;

int main()
{
    
    int size=5;
    
    for(int i=size; i>1; i--){
        
        cout<<size<<" ";
  
        for(int j=size-1;j>0;j--)
        {
            if(i==j)
                cout<<j<<" ";
            else
                cout<<" "<<" ";
        }
        
        cout<<endl;
    }
    
     //printing last row 
        cout<<size<<" ";
        int j=size;
        while(j-->1)
            cout<<j<<" ";
    
    return 0;
}
