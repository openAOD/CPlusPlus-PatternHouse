#include <iostream>
using namespace std;

int main()
{
    char count='E';
    
    for(int i=0;i<5;i++)
    {
        for(char j='A';j<=count;j++)
        {
            cout<<j<<" ";
        }
        
        count--;
        
        cout<<"\n";
    }

    return 0;
}