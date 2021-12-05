#include <iostream>

using namespace std;

int main()
{
    char ch1='*';
    for(char i =69; i >=65; i--)
    {
        for(char j = 69 ; j>=65;j--)
        {
            if((i+j>=(69+65)))
            {
                cout<<i;
            }
            else
            {
                
                cout<<ch1;
                
            }
        }cout<<"\n";
    }
    
    
    return 0;
}
