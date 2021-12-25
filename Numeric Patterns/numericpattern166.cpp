
#include <iostream>

using namespace std;

int main()
{   
    
    for (int i=1;i<=7;i+=2)
    {  
        int c=1;
       for (int j=1;j<=i;j++)
       {
           cout<<c;
           c++;
       }
       cout<<endl;
    }
    
    return 0;
}