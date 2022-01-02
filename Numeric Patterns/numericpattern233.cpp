#include <iostream>
using namespace std;

int main()
{
    
    int height=5;
    int count=height/2;
    int count2=1;

   for(int i=0; i<height; i++){
       
       if(i==height/2){
           
           for(int j=height/2; j>0;j--)
            cout<<j<<" ";
            
            //print remaining numbers
            int j=0;
            while(j<=height/2)
                cout<<j++<<" ";
 
        cout<<endl; 
        continue;
       } 
       
       else{
           
           for(int j=0;j<height;j++){
               
               if(j==height/2){
                   
                    if(count==0)
                        cout<<count2++;
                            
                    else
                        cout<<count--;
               }
               
               else
                    cout<<" "<<" "; //two spaces for skipping number and the space ahead
           }
           
            cout<<endl; 
           
       }
       
   }
    
    return 0;
}
