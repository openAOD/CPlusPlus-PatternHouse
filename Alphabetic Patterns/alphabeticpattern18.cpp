#include <iostream>
using namespace std;

int main() {
    
    char strt='E';
    
    for(int i=0;i<5;i++)
    {
        
      for(char j=strt;j>='A';j--)
        {
            cout<<j<<" ";
        }
        
        strt--;
        cout<<"\n";
    }
      

    return 0;
}