#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j < 2*n; j++) {
            if(j == n - i + 1 || j == n + i - 1)
                cout << (n - i + 1);
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}