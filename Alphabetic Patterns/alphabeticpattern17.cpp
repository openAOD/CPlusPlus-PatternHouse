#include <iostream>
using namespace std;

int main() {
    
    char count='A';
    
    for(int i=0;i<5;i++)
    {
        
      for(char j='E';j>=count;j--)
        {
            cout<<j<<" ";
        }
        
        count++;
        cout<<"\n";
    }
      

    return 0;
}