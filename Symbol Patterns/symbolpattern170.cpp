#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int a[] = {4, 3, 5, 1, 2};
    for(int i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]";
        for(int j = 0; j < a[i]; j++) 
            cout << "# ";
        cout << "\n";
    }
    return 0;
}