
#include <iostream>

using namespace std;

int main()
{
    for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<(char)(i+64);
        }
        for (int j=(5-i);j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}