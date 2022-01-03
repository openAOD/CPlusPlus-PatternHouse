#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if (row == col || n - col + 1){
                cout<<"1 ";
            }
            else{
              cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :-
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1


