#include <iostream>
using namespace std;

int main()
{
    int n = 5, mid = n/2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || i == mid || j == 1 || (j == n && i > mid))
                cout << "6 ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}