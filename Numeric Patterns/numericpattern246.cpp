#include <iostream>
using namespace std;

int main()
{

    int size=5;
    
    //printing first row 
        cout<<size<<" ";
        int j=size;
        while(j-->1)
            cout<<size<<" ";
        cout<<endl;
        
    //printing subsequent rows
    for(int i=size-1; i>0; i--){

        cout<<i<<" ";

        for(int j=1;j<size;j++)
        {
            if(j==i-1){
                cout<<i<<" ";
                continue;
            }
               
            else
                cout<<" "<<" ";
        }

        cout<<endl;
    }

    return 0;
}