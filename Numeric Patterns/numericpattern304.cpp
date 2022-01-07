#include <iostream>
using namespace std;

int main() {
    int height;
    cin>>height;
    
    for(int i = 1;i <= height; i++) {
        for(int j=1;j<=height-i;j++) {
            cout<<"   ";
        }
        for(int j=1;j<=i;j++) {
            cout<<j<<"  ";
        }
        for(int j=1;j<=i;j++) {
            cout<<(char)(j+64)<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

// Sample Input :- 5
// Output :-
//         1 A
//       1 2 A B
//     1 2 3 A B C
//   1 2 3 4 A B C D
// 1 2 3 4 5 A B C D E
