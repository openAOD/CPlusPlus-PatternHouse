
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int curr_char=4; //same as 54 but current characater decreases
    for (int i=1;i<=5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (j%2!=0)                //for 2nd and 4th column values need to be in reverse order
            {char a = 65+(9*(j/2 +1)-curr_char+(j/2));     // j/2 decides which column it is 
            cout << a << " ";}
            else
            {
                char a=65+(curr_char+5*j);
                cout << a << " ";}
        }
        curr_char--;
        cout << "\n";
    }
}