#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1 || i == n || i == j )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}