#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++) {
        int value = 3 * n - i +1;
        for (int j = 1; j <= i; j++) {
            if (i==n){
                cout<<n + j -1<<" ";
            }
            else if(j == 1){
              cout<<i<<" ";
            } 
            else if(j == i) {
              cout<<value;
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
// 1
// 2 12
// 3   11
// 4     10
// 5 6 7 8 9
