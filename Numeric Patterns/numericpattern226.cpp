#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; // No. of lines to be printed
    
    for(int row = 1; row <= 5; row++) {
        for(int col = 1; col <= n; col++) {
            if(col == row || n - col + 1 == row) {
                cout<<row<<" ";
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
// 1       1
//   2   2
//     3
//   4   4
// 5       5
