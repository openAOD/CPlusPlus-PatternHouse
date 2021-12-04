#include <iostream>

using namespace std;

int main() {
   int n= 5;
        int k = 1;
        int i = 1;
        for (int row = 1; row <= n; row++) {              // Iterating through rows
            for (int col = 1; col <= row; col++) {        // Iterating through columns
                cout<<i << " ";
                i += 2;                                   // for every number of pattern
            }
            cout<<endl;                         // for breaking each line
        }
   
   return 0;
}
