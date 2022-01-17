#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n*2; j++) {
            if(j <= i)
                cout << j << " ";
            else if(j > n*2 - i)
                cout << (n*2 - j + 1) << " ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}