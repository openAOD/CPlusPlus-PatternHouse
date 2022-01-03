#include <iostream>
using namespace std;

int main()
{
    
    int height=5;
    int size=9;
    int mid=size/2;
    int obj=0;
    char chr1='E';
    char chr2='F';

  for(int i=0;i<height;i++){
      for(int j=0;j<=size-1;j++){
   
          if(j==mid-obj || j==mid+obj){
              
              if(obj==0){
              //print first row 
              cout<<chr1--;
              break;
            }
              
             //print subsequent rows
             if(j==mid-obj)
                cout<<chr1--<<" ";
                
             else
                cout<<chr2++<<" ";
          }
          else
            cout<<" "<<" ";
      }
      obj++;
      cout<<endl;
  }
  
  
    return 0;
}