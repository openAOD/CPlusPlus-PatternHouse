#include <iostream>
using namespace std;

int main() {
    int height;
    cin>>height;
    int x = 1;
    
    for(int i = 1;i <= height; i++) {
        for(int j=1;j<=height-i;j++) {
            cout<<"   ";
        }
        for(int j=i;j<=x;j++) {
            cout<<j<<"  ";
        }
        for(int j=i;j<=x;j++) {
            cout<<(char)(j+64)<<"  ";
        }
        cout<<endl;
        x = x + 2;
    }
    cout<<endl;
    return 0;
}

// Sample Input :- 5
// Output :-
//         1 A
//       2 3 B C
//     3 4 5 C D E 
//   4 5 6 7 D E F G
// 5 6 7 8 9 E F G H I


