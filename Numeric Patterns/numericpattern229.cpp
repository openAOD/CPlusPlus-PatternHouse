#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; // No. of lines to be printed
    
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            if(col == row || n - col + 1 == row) {
                cout<<n - col + 1<<" ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :-
// 5       1
//   4   2
//     3
//   4   2
// 5       1
