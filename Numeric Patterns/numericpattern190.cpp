#include <iostream>

using namespace std;

int main()
{   int c=1;
    for (int i=5;i>=1;i--)
    {   for (int k=1;k<=(i-1);k++)
        {
            cout<<" ";
        }
        for (int j=c;j>=1;j--)
        {
           if (j%2==0)
           cout<<'*';
           else
           cout<<j;
        }
        c++;
        cout<<endl;
    }

    return 0;
}