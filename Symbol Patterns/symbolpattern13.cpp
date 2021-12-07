#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        { 
            cout<<j;
        }
        for (int k=5-i;k>=1;k--)
        {
            cout<<'*';
        }
        cout<<endl;
    }

    return 0;
}