#include <iostream>
using namespace std;

int main()
{
    int n = 5, max = 5;
    int a[] = {4, 3, 5, 1, 2};
    for(int i = 0; i < max; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] >= max - i)
                cout << " # ";
            else
                cout << "   ";
        }
        cout << "\n";
    }
    for(int i = 0; i < n; i++)
        cout << "[" << i + 1 << "]";
    return 0;
}