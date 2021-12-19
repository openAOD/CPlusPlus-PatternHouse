#include <iostream>
using namespace std;

int main() 
{
    int n = 9, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n/2 + 1; j++) {
            if(j >= x)
                cout << "* ";
            else
                cout << "  ";
        }
        if(i <= n/2)
            x++;
        else
            x--;
        cout << endl;
    }
    return 0;
}