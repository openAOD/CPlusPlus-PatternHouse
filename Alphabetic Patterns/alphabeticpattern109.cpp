#include <iostream>
using namespace std;

int main()
{

    int count=3;
    int count2=0;
    int flag=0;
    char chr='A';

    for(int i=1;i<8;i++){
        for(int j=0; j<4; j++){

            if(j==count&&flag==0){
            //Keep track of element printing 
              count--; //going towards left

              if(count==0){
                flag=1;
              }


              cout<<chr++;
              break;    
            }

            else if(j==count2&&flag==1){
            //Keep track of element printing 
                count2++; //going towards right (after mid part)
                cout<<chr++;
                break;            
            }

            else
                cout<<" "<<" ";
        }

        cout<<endl;
    }



    return 0;
}