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
            cout<<i<<"  ";
        }
        for(int j=1;j<=i;j++) {
            cout<<(char)(i+64)<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

// Sample Input :- 5
// Output :-
//         1 A
//       2 2 B B
//     3 3 3 C C C
//   4 4 4 4 D D D D
// 5 5 5 5 5 E E E E E
