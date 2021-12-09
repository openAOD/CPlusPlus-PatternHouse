#include <iostream>
using namespace std;

int main()
{
   int n = 5;
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j <n; j++)
       {
           if(i==0){
               cout<<"T ";
           }
          else if(j==n/2){
               cout<<"T ";
           }
           else cout<<"  ";
          
       }
        cout<<endl;
       
   }
   
    return 0;
}