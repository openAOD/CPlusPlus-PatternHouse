#include <iostream>
using namespace std;

int main() {
    int n; // Input no. of lines to be printed
    cin>>n;
        
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n-i; j++) {
            cout<<"  ";
        }
        for(int k = 0; k <= i; k++) {
            char c = (char)(k+65);
            cout<<c<<"   ";
        }
        cout<<endl;
    }
        
    for(int i = n-1; i > 0; i--) {
        for(int j = n; j > i; j--) {
            cout<<"  ";
        }
        for(int k = i; k > 0; k--) {
            char c = (char)(k+65);
            cout<<c<<"   ";
        }
        cout<<endl;
    }

    return 0;
}

// Sample Input :- 5
// Output :-
//         A
//       A   B
//     A   B   C
//   A   B   C   D
// A   B   C   D   E
//   B   C   D   E
//     C   D   E
//       D   E
//         E
