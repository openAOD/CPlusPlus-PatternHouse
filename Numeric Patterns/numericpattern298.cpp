#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < n*2; j++) {
            if(j <= n - i + 1)
                cout << j << " ";
            else if(j >= n + i - 1)
                cout << (n*2 - j) << " ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}