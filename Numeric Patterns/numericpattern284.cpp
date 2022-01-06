#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*x; j++) {
            if(i <= n/2 + 1 && j % 2 == 1) 
                cout << i << " ";
            else if(i > n/2 + 1 && j % 2 == 1)
                cout << n - i + 1 << " ";
            else
                cout << "* ";
        }
        if(i <= n /2) 
            x++;
        else
            x--;
        cout << endl;
    }
    return 0;
}