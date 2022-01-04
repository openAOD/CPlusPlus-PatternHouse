#include <iostream>
using namespace std;

int main() {
    int n; // Input no. of lines to be printed
    int y; // Input no. of timed pattern to be printed
    cin>>n>>y;
    for(int k = 0; k < y; k++) {
        for(int i = 1;i <= n; i++) {
            for(int j = 1;j <= i; j++) {
                char c = (char)(i+64);
                cout<<c<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

// Sample Input :- 3
//                 2
// Output :-
// A
// B B
// C C C 
// A
// B B 
// C C C
