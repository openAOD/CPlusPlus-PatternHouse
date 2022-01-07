#include <iostream>
using namespace std;

int main() {
    int n; // Input no. of lines to be printed
    cin>>n;
        
    for(int i=0;i<n;i++) {
        for(int j=1;j<n-i;j++) {
            cout<<"  ";
        }
        for(int k=0;k<=i;k++) {
            char c = (char)(i+65);
            cout<<c<<"   ";
        }
        cout<<endl;
    }
        
    for(int i=n-1;i>0;i--) {
        for(int j=n;j>i;j--) {
            cout<<"  ";
        }
        for(int k=i;k>0;k--) {
            char c = (char)(i+64);
            cout<<c<<"   ";
        }
        cout<<endl;
    }

    return 0;
}

// Sample Input :- 5
// Output :-
//         A
//       B   B
//     C   C   C
//   D   D   D   D
// E   E   E   E   E
//   D   D   D   D
//     C   C   C
//       B   B
//         A
