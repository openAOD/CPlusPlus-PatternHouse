#include <iostream>
using namespace std;

int main()
{

    for(int i = 0; i < 5; i++)           //outer 5 iterations
    {
        for(int k= 1; k<5-i;k++)         //no.of gaps at start of ith iteration 4-i
            cout <<" ";

        for(int j = 0; j <= i; j++)     // i+1 th character i times
        {
            char x =(char)j+65;
            cout << x << " ";           //add space after every value
        }
        cout << endl;
    }
}