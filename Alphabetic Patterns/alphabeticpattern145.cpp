#include <iostream>
using namespace std;

int main()
{
    
    int height = 5;
    
    for(int i=0;i<height;i++){
        
        cout<<"*"<<" ";
        
        for(int j=0; j<height-1;j++){
            
            if ((i == 0) or (i==height/2 && j<=(height/2)+1))
                cout<<"*"<<" ";
            else
                continue;
        }
        
        cout<<endl;
        
    }

    return 0;
}
