#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; // No. of lines to be printed
    
    for(int row = 1; row <= 5; row++) {
        for(int col = 1; col <= n; col++) {
            int value = col == n/2 ? row : col;
            if(col == n/2 + 1 || row == n/2 + 1) {
                cout<<value<<" ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :-
//     1
//     2
// 1 2 3 4 5
//     4   
//     5
