#include <iostream>
using namespace std;

int main()
{
    int n = 9, x = n/2 + 1, num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == x || j == n - x + 1)
                cout << num << " ";
            else
                cout << "  ";
        }
        if(i <= n/2) {
            x--;
            num++;
        }
        else {
            x++;
            num--;
        }
        cout << endl;
    }
    return 0;
}