#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
  int value = 1;
  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i){
                cout<<value<<" ";
                value++;
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
// 2 3
// 4   5
// 6      7
// 8 9 10 11 12
