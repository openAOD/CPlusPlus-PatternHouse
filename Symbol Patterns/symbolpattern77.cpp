#include <iostream>
using namespace std;

int main() {
    int n = 5;     // n should be odd
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n/2 + 1 || j == n/2 + 1)
                cout << "X ";
            else
                cout << "O ";
        }
        cout << endl;
    }

    return 0;
}