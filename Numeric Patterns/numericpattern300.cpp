#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = n + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            if(j <= x/2)
                cout << j << " ";
            else
                cout << (x - j + 1) << " ";
        }
        if(i <= n/2)
            x -= 2;
        else
            x += 2;
        cout << "\n";
    }
    return 0;
}