#include <iostream>
using namespace std;

int main() 
{
    int height = 4, length = 4;
    int x = height - 1;
    for(int i = 0; i <= height; i++) {
        for(int j = 0; j < height*length*2; j++) {
            if(j % (height*2) == x || j % (height*2) == height + i)
                cout << "*";
            else
                cout << " ";
        }
        x--;
        cout << endl;
    }
    return 0;
}