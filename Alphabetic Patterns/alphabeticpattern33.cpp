#include <iostream>
using namespace std;

int main()
{

    for(int i = 5; i > 0 ; i--)           //outer 5 iterations
    {
        for(int k= 5; k > i ;k--)         //no.of gaps at start of ith iteration 
            cout <<" ";


        for(int j = 0; j < i; j++)   
        {
            char x =(char)i+64;
            cout << x << " ";           //add space after every value
        }

        cout << endl;
    }
}