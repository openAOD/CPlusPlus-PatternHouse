#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; // No. of lines to be printed
    
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            if(col == row || n - col + 1 == row) {
                cout<<col<<" ";
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
// 1       5
//   2   4
//     3
//   2   4
// 1       5
