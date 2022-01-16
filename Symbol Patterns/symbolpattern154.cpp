#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    
    for(int i = 1; i <= n; i++) {
        int k = (i % 2 != 0) ? i + 1 : i;
        for(int j = 0; j < k; j++) 
            cout << "* ";
            
        cout << "\n";
    }
    
    return 0;
}