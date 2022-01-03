#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i==n){
                cout<<j<<" ";
            }
            else if(j==1 || j==i){
              cout<<j<<" ";
            } 
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :-
// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
