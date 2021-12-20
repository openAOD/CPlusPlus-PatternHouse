#include <iostream>
using namespace std;

int main() 
{
    int height = 5, length = 4;
    int inSpace = 1, outSpace = 2;
    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= length; j++) {
            for(int k = 1; k <= outSpace; k++)
                cout << " ";
            cout << "0";
            for(int k = 1; k <= inSpace; k++)
                cout << " ";
            cout << "0";
            for(int k = 1; k <= outSpace; k++)
                cout << " ";
            cout << " ";
        }
        outSpace = (i + 1 != height);
        inSpace = (i + 1 != height) ? 3 : 5;
        cout << endl;
    } 
    return 0;
}