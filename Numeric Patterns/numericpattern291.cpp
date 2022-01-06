#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for(int i = n; i >= -n; i--) {
        for(int j = abs(i); j >= 0; j--) 
            cout << j << " ";
        cout << endl;
    }
    return 0;
}