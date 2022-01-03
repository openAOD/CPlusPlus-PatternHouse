#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i==n){
                cout<<n<<" ";
            }
            else if(j==1 || j==i){
              cout<<i<<" ";
            } 
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :- 
// 1
// 2 2
// 3   3
// 4     4
// 5 5 5 5 5
