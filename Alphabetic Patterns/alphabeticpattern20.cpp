#include <iostream>
using namespace std;

int main() {
    
    char count='I';
    
    for(char i='E';i>='A';i--)
    {
        
      for(char j=i;j<=count;j++)
        {
            cout<<j<<" ";
        }
        
        count-=2;
        cout<<"\n";
    }
      

    return 0;
}