#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            for(int k = 0; k <= j; k++)
                cout << char(j + 65) << " ";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}