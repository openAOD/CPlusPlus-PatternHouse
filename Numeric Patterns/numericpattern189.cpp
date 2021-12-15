#include <iostream>

using namespace std;

int main()
{
    for (int i=5;i>=1;i--)
    {   for (int k=1;k<=(i-1);k++)
        {
            cout<<" ";
        }
        for (int j=i;j<=5;j++)
        {
           if (i%2==0)
           cout<<'*';
           else
           cout<<j;
        }
        cout<<endl;
    }

    return 0;
}