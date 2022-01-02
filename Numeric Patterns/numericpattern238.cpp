#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if (row == 1 || row == 5 || col == 1 || col == 5){
                cout<<"1 ";
            }
            else{
              cout<<"  ";
            }
        }
        cout<<endl;
    }
}

// Sample Input :- 5
// Output :- 
// 1 1 1 1 1
// 1       1
// 1       1
// 1       1
// 1 1 1 1 1
