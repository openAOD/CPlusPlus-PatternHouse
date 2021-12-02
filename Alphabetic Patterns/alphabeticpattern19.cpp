#include <iostream>
using namespace std;

int main() {
    
    char count='A';
    
    for(char i='E';i<='I';i++)
    {
        
      for(char j=i;j>=count;j--)
        {
            cout<<j<<" ";
        }
        
        count+=2;
        cout<<"\n";
    }
      

    return 0;
}