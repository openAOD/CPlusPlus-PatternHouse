#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || (i == 1 || i == n/2 + 1 || i == n) && j <= n - 1 || (j == n && i != 1 && i != n))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}