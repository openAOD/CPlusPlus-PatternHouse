#include <iostream>

using namespace std;

int main()
{
    int s=1,e=1;
    for (int i=1;i<=5;i++)
    {
        for (int j=s;j<=e;j++)
        {
          cout<<j<<" ";
        }
        s=e;
        e=e+i;
        
        cout<<endl;
    }
    return 0;
}