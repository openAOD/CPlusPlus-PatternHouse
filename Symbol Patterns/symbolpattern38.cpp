#include <iostream>

using namespace std;

int main()
{
    char ch1='*',ch2='#';
    for(int i =0; i <5; i++)
    {
        for(int j = 0 ; j<5;j++)
        {
            if((i==j) || (i>=j))
            {
                if(j%2==0)
                {
                    cout<<ch2;
                }
                else
                {
                
                    cout<<ch1;
                
                }
            }    
        }cout<<"\n";
    }
    
    
    return 0;
}
