#include <iostream>
using namespace std;

int main() 
{
    int n = 3;
    for(int i = n; i >= -n; i--) {
        for(int j = 0; j <= abs(i); j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}