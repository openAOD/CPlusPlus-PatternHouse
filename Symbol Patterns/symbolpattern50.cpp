#include <iostream>

using namespace std;

int main()
{   
    int j,k;
  bool  flag=true;
    for (int i=1;i<=5;i++)
    {
        for ( j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for (k=1;k<=i;k++)
        {
          if (flag==true)
          {
              if (k%2==0)
              cout<<"*";
              else
              cout<<"#";
          }
          else
          {
               if (k%2==0)
              cout<<"#";
              else
              cout<<"*";
          }
          
        }
        cout<<endl;
        flag=!flag;
        
    }

    return 0;
}