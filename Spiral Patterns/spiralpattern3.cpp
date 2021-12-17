#include <iostream>
using namespace std;

int main()
{
    int n = 4, k = 0;
    for (int i = 1; i <= n+1; i++) {
        for (int j = n-i+1; j <= (2 * n) - i; j++) {
            if (i % 2 == 1) {
                k++;
                if (k < 10)
                    cout << "0" << k << " ";
                else
                    cout << k << " ";
            }

            else {
                if (k < 10)
                    cout << "0" << k << " ";
                else
                    cout << k << " ";
                k--; 
            }
        }
        k += n; 
        cout << endl;
    }
    return 0;
}