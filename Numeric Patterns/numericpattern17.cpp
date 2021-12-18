#include <iostream>

using namespace std;

int main()
{   
    bool flag=true;
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            if (flag==true)
            cout<<'0';
            else
            cout<<'1';
            flag=!flag;
        }
        cout<<endl;
    }

    return 0;
}