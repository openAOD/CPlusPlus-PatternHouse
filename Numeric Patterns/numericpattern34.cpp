#include <iostream>

using namespace std;

int main()
{
     int n =4 ;
     int i = 1;                                                     
            for (int row = 1; row <= n; row++) {                   // for iterating through rows
                int k = i;                                         
                for (int col = 1; col <= row; col++) {             // for iterating through columns
                    cout<< k << " ";                               // keeps track of numbers of each column
                    k--;
                }
                i = i+ row + 1;                                    // keeps track of number starting in each row
                cout << endl;                                      // for breaking each line
            }   
   return 0;
}
