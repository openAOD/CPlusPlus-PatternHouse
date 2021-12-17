#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start=4; //since start is A+3
    for (int i=1;i<=start;i++)
    {
        int k=start;          
        for (int l=1;l<=start-i;l++)
        cout << "  ";                //for printing spaces
        for (int j=i;j>=1;j--)      //for reaching maxima 
        {
            char a= 65+k+(j-i)-1;    
            cout << a << " ";
        }
        cout << "\n";
    }
     for (int i=start-1;i>=1;i--)
    {
        int k=start;
        for (int l=1;l<=start-i;l++)
        cout << "  ";
        for (int j=i;j>=1;j--)      //for reaching minima
        {
            char a= 65+k+(j-i)-1;
            cout << a << " ";
        }
        cout << "\n";
    }
}