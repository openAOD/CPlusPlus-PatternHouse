#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n; j++) {
            if(j >= n- i + 1 && j <= n + i - 1)
                cout << "* ";
            else if(j <= n)
                cout << j << " ";
            else
                cout << (2*n - j) << " ";
        }
        cout << "\n";
    }
    return 0;
}