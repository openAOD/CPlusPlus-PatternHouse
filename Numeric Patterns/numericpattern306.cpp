#include <iostream>
using namespace std;

int main() {
    int height;
    cin>>height;
    
    for(int i = 1;i <= height; i++) {
        for(int j=1;j<=5-i;j++) {
            cout<<"   ";
        }
        for(int j=1;j<=i;j++) {
            cout<<(char)(i+64)<<"  ";
        }
        for(int j=1;j<=i;j++) {
            cout<<i<<"  ";
        }
            cout<<endl;
    }
        cout<<endl;
    return 0;
}

// Sample Input :- 5
// Output :-
//         A 1
//       B B 2 2
//     C C C 3 3 3
//   D D D D 4 4 4 4
// E E E E E 5 5 5 5 5 
