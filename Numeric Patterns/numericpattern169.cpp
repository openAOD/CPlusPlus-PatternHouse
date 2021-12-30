#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < i * 2; j++) {
            if(j < i)
                cout << (n + j - i) << " ";
            else if(j == i)
                cout << "0 ";
            else
                cout << (n - j + i) << " ";
        }
        cout << endl;
   }
   return 0;
}