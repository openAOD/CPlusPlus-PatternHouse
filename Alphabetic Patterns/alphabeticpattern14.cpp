#include <iostream>
using namespace std;

int main()
{
    int count=5;
    
    for(char i='A';i<='E';i++)
    {
        for(int j=0;j<count;j++)
        {
            cout<<i<<" ";
        }
        
        count--;
        
        cout<<"\n";
    }

    return 0;
}