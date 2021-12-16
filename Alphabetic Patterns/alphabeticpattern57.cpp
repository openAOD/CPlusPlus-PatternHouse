#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cur_char=0;   //starts from A
    for (int i=1;i<=5;i++)
    {
        for (int j=0;j<i;j++) //to print number
        cout << 6-i << " ";
        for (int k=i;k<5;k++) //to print character
        {
            char a = 65+cur_char;
            cout << a << " ";
        }
        cur_char++;   //new character at every line.
        cout << "\n";
    }
} 