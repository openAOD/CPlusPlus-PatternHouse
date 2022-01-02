#include <iostream>
using namespace std;

int main()
{
    
    int height=5;
    int count=1;
    int count2=2;

   for(int i=0; i<height; i++){
       
       if(i==height/2){
           
           for(int j=1; j<=(height/2)+1;j++)
            cout<<j<<" ";
            
            //print remaining numbers
            int j=2;
            while(j>0)
                cout<<j--<<" ";
 
        cout<<endl; 
        continue;
       } 
       
       else{
           
           for(int j=0;j<height;j++){
               
               if(j==height/2){
                   
                    if(count==height/2+1)
                        cout<<count2--;
                            
                    else
                        cout<<count++;
               }
               
               else
                    cout<<" "<<" "; //two spaces for skipping number and the space ahead
           }
           
            cout<<endl; 
           
       }
       
   }
    
    return 0;
}
