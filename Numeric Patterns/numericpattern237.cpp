#include <iostream>
using namespace std;

int main()
{
    
    int height=5;
    int top=0;
    int bottom=height-1;

   for(int i=0; i<height; i++){
       
       if(i==top || i==bottom){
           
           for(int j=0;j<height;j++)
                cout<<1<<" ";
       
        cout<<endl;
        continue;   
       }
       
       else if(i==top+1 || i==bottom-1){
           
           for(int j=0;j<height;j++){
               
                if(j==height/2)
                    cout<<0<<" ";
                else
                    cout<<1<<" ";
           }
        cout<<endl;
       }
       
       
       else{ //middle row
        for(int j=0;j<height;j++){
           
            if(j%2==0)
                cout<<1<<" ";
            else
                cout<<0<<" ";
           }
       cout<<endl;
       }
       
   }
    
    return 0;
}
