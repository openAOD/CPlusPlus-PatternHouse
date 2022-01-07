#include<iostream>
using namespace std;
int main()
{
    long d,n,a1;
    float an;
    cout<<"Enter first term ";
    cin>>a1;
    cout<<"Enter difference ";
    cin>>d;
    cout<<"Enter number of terms";
    cin>>n;
    cout<<"Harmonic progression : ";
    for(int y=1;y<=n;y++)
    {
        an=a1+(y-1)*d;
        cout<<"1/"<<an<<"   ";
    }
    return 0;
}