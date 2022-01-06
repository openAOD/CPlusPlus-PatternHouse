#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2*(n - i + 1); j++) {
            if(i + j <= n + 1)
                cout << char(64 + j) << " ";
            else 
                cout << char(65 + (2*(n - i + 1) - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}