#include <iostream>
using namespace std;

int main()
{
    int n = 5, mid = n/2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < n*2; j++) {
            if((i == mid && j > n - mid && j < n + mid) || j == n - i + 1 || j == n + i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}