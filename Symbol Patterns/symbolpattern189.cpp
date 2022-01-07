#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i=5; i>=1; i--)
    {
        for(j=i; j<5; j++)
        {
            cout<< " ";
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==5 || j==1 || j==(2*i-1))
            {
                cout<< "*";
            }
            else
            {
                cout<< " ";
            }
        }
        
        cout<<endl;
    }
    
    return 0;
}