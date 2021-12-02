#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0||i==n/2||i==n-1)
            {
                cout <<"9 ";
            }
            else if(i<n/2&&j==0){
                cout<<"9 ";
            }
            else if(i<n/2&&j==n-1){
                cout<<"9 ";
            }
            else if(i>n/2&&j==n-1){
                cout<<"9 ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}