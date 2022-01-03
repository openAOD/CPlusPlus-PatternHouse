#include <iostream>
using namespace std;

int main()
{
    
    int count=0;
    int count2=2;
    int flag=0;
    
    for(int i=1;i<8;i++){
        for(int j=0; j<4; j++){
            
            if(j==count&&flag==0){
            //Keep track of element printing 
              count++; //going towards right
            
              if(count==4){
                  flag=1;
                  count--;
              }
                
              cout<<i;
              break;    
            }
            
            else if(j==count2&&flag==1){
            //Keep track of element printing 
                count2--; //going towards left (after mid part)
                cout<<count--;
                break;            
            }
            
            else
                cout<<" "<<" ";
        }
        
        cout<<endl;
    }
    
   
    
    return 0;
}
