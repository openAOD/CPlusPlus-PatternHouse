#include <iostream>
using namespace std;

int main()
{
    
    int height=5;
    int size=9;
    int obj=0;
    char chr1='A';
    char chr2='I';

  for(int i=0;i<height;i++){
      for(int j=0;j<=size-1;j++){
          if(j==i || j==size-1-obj){
              if(j==i)
                cout<<chr1++<<" ";
              else //j==size-1-obj
                cout<<chr2--<<" ";
          }
          else
            cout<<" "<<" ";
      }
      obj++;
      cout<<endl;
  }
  
  
    return 0;
}