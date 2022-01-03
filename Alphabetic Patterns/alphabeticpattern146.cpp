#include <iostream>
using namespace std;

int main(){
   
   int size=5;
   int top=0;
   int bottom=size-1;
   
   for(int i=0;i<size;i++){
       
       if(i==top || i==bottom) //Top row and last row
       {
           for(int j=0;j<size;j++)
                cout<<"*"<<" ";
            cout<<endl;
       } 
       
       else if(i==top+1){ //Second row
            cout<<"*"<<endl;
       }
       
       else if(i==size/2){ //Middle row
           for(int j=0;j<size;j++){
               if(j!=1)
                cout<<"*"<<" ";
               else
                cout<<" "<<" ";
           }
             
            cout<<endl;
       }
       
       else{ //(i==bottom-1) Second last row
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