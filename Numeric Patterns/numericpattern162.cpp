#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < 2*n; j++) {
            if(i == j || j == n || j == 2*n - i)
                cout << "* ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }
    return 0;
}