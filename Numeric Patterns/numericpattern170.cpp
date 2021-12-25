#include <iostream>

using namespace std;

int main()
{   
    int c=1;
    for (int i=1;i<=4;i++)
    {   int p=1;
        for (int j=1;j<=c;j++)
        {
            if (j%2==0)
            cout<<"*";
            else
            cout<<p++;
        }
        cout<<endl;
        c+=2;
    }

    return 0;
}