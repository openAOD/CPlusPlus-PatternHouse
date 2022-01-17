#include <iostream>
using namespace std;

int main()
{
    int n = 5, num;
    char ch;
    for(int i = 1; i <= n; i++) {
        ch = char(64 + i);
        num = i;
        
        for(int j = 1; j <= 2*n; j++) {
            if(j >= n - i + 1 && j<= n)
                cout << ch++ << " ";
            else if(j < n + i + 1 && j > n)
                cout << num++ << " ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}