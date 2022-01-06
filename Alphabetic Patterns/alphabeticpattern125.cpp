#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j >= x && j <= n - x + 1)
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