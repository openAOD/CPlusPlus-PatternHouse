#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max=4; //(A+3=D hence max is 4) 
    int current_char=0; //starts from A
    for (int i=1;i<=max;i++)
    {
        for (int l=1;l<=max-i;l++)
        cout << "  ";                // for spaces
        for (int j=1;j<=i;j++)
        {
            char a=65+current_char;    //print current char, row number of times
            cout << a << " ";
        }
        current_char+=1;          //update current character, as it changes in the next row
        cout << "\n";
    }
    //once you reach max then we go from max-1 to 1 char in row
    for (int i=max-1;i>=1;i--)
    {
        for (int l=1;l<=max-i;l++)
        cout << "  "; 
         for (int j=1;j<=i;j++)
        {
            char a=65+current_char;    //print current char, row number of times
            cout << a << " ";
        }
        current_char+=1;          //update current character, as it changes in the next row
        cout << "\n";
    }
}