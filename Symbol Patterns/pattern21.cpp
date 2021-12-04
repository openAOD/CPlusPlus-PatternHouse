#include <iostream>

using namespace std;

int main()
{
    char ch1='*';
    for(char i =65; i <70; i++)
    {
        for(char j = 65 ; j < 70;j++)
        {
            if((i == j)||(i >= j))
            {
                cout<<j;
            }
            else
            {
                
                cout<<ch1;
                
            }
        }cout<<"\n";
    }
    
    
    return 0;
}
