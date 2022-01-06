#include <iostream>
using namespace std;

int main()
{
    int n = 5, x = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= x; j++) {
            if(i != n/2)
                cout << "* ";
            else
                cout << char(j + 65) << " ";
        }
        if(i < n/2)
            x++;
        else
            x--;
        cout << endl;
    }
    return 0;
}