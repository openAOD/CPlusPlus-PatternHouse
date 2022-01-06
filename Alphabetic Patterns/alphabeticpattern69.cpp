#include <iostream>
using namespace std;

int main()
{
    for(char i = 'E'; i >= 'A'; i--) {
        for(char j = 'A'; j <= 'E'; j++) {
            if(j < i)
                cout << i << " ";
            else 
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}