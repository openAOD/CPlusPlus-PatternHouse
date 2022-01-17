#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= x; j++) {
            if(i <= n/2 + 1)
                cout << (j + i - 1) << " ";
            else
                cout << (j + i - x) << " ";
        }
        if(i <= n/2)
            x -= 2;
        else
            x += 2;
        cout << "\n";
    }
    return 0;
}