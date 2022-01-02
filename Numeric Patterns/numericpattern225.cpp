#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; // No. of lines to be printed
    
    for(int row = 0; row <= 5; row++) {
        for(int col = 1; col <= n - row + 1; col++) {
            if(col == n - row + 1) {
                cout<<(n - row)<<" ";
            }
            else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :-
// * * * * * 5
// * * * * 4
// * * * 3
// * * 2
// * 1
// 0


