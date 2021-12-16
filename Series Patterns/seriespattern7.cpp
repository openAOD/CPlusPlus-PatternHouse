// given series if fibanocci, which is sum of two previous numbers
//We follow a iterative process using array here.
#include<bits/stdc++.h>
using namespace std;
#define N 10 //length of series
int main()
{

    int f[N+1];
    f[0]=0;
    f[1]=1;
    for (int i=2;i<N+1;i++)
    {
        f[i]=f[i-1]+f[i-2]; //fibanocci 
    }
    for (int i=1;i<N+1;i++)
    {
        cout << f[i] << "\n"; //print the array
    }
    return 0;
}