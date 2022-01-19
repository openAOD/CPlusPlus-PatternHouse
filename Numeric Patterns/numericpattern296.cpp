#include <iostream>
using namespace std;

int main()
{
    int n = 7, x = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n/2 + 1; j++) {
            if(j >= x)
                cout << j << " ";
            else
                cout << "  ";
        }
        if(i <= n/2)
            x++;
        else
            x--;
        cout << "\n";
    }
    return 0;
}