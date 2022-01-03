#include <iostream>
using namespace std;

int main()
{
    
    int height=5;
    int size=9;
    int mid=size/2;
    int obj=0;
    char chr='E';

  for(int i=0;i<height;i++){
      for(int j=0;j<=size-1;j++){
   
          if(j==mid-obj || j==mid+obj){
              
            if(obj==0){
            //print first row 
              cout<<chr;
              break;
            }
              
            //print subsequent rows
            cout<<chr<<" ";
          }
          else
            cout<<" "<<" ";
      }
      obj++;
      chr--;
      cout<<endl;
  }
  
  
    return 0;
}