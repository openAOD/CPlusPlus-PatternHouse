#include <iostream>
using namespace std;

int main()
{
    
  
  int size=5;
  
  for(int i=0;i<size-1;i++){
      for(int j=0;j<size-1;j++){
          
          if(j==size-i-1){
              cout<<j+1<<" ";
              continue;
          }
          else
            cout<<" "<<" ";
          
      }
      
      cout<<size<<endl;
  }
  
  //Printing last row 
  int j=1;
  while(j<=size)
    cout<<j++<<" ";
    
    return 0;
}
