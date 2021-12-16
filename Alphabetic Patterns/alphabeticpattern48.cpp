#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start=4; //since start is A+4
    for (int i=1;i<=start;i++)
    {
        int k=i;                     //start value from A   
        for (int j=1;j<=i;j++)      //for reaching maxima 
        {
            char a= 65+k+(j-i)-1;    
            cout << a << " ";
        }
        cout << "\n";
    }
     for (int i=start-1;i>=1;i--)
    {
        int k=i;
        for (int j=1;j<=i;j++)      //for reaching minima
        {
            char a= 65+k+(j-i)-1;
            cout << a << " ";
        }
        cout << "\n";
    }
}