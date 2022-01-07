#include <iostream>
using namespace std;

int main() {
    int n; // Input no. of times pattern to be printed
    cin>>n;
    
    char c = 'A';
    for(int k = 1; k <= n; k++) {
        for(int i = 1;i <= k; i++) {
            for(int j = 1;j <= i; j++) {
                cout<<c<<" ";
            }
            cout<<endl;
        }
        c++;
        cout<<endl;
    }
    return 0;
}

// Sample Input :- 3
// Output :-
// A
//
// B
// B B
//
// C
// C C
// C C C
