#include <iostream>
using namespace std;

int main() {
    int height; // Input height of the pattern
    cin>>height;
        
        for(int i = 1; i <= height; i++) {
            
            for(int j = 1; j <= height; j++) {
                if(i == 1 || i == height || j == 1 || j == height) {
                    cout<<"0 ";
                }
                else if(i == height-j+1) {
                    cout<<"0 ";
                }
                else {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    return 0;
}

// Sample Input :- 5
// Output :-
// 0 0 0 0 0
// 0     0 0
// 0   0   0
// 0 0     0
// 0 0 0 0 0
