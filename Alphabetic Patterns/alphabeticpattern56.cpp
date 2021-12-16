#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cur_char=4; //(A+4 =E)
    for (int i=0;i<5;i++)
    {
        int inc=0;
        for (int j=i;j<i+5;j++)
        {
            inc=j;
            if(inc>cur_char)
            inc=inc-cur_char-1;                       //if char is > E , char is A
            char a = 65+inc;
            cout << a << " ";
        }
        cout << "\n";
    }
}