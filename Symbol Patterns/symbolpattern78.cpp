#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i % 2 == 0) {
                if(j % 2 != 0)
                    cout << "X";
                else
                    cout << "O";
            }
            else {
                if(j % 2 != 0)
                    cout << "O";
                else
                    cout << "X";
            }
        }
        cout << endl;
    }
    return 0;
}
