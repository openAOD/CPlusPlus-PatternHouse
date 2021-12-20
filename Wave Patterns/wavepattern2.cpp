#include <iostream>
using namespace std;

int main() 
{
    int height = 4, length = 4;
    int width = height - 1;
    int x = width;
    for(int i = 0; i <= width; i++) {
        for(int j = 0; j <= width*length*2; j++) {
            if(j % (width*2) == x || j % (width*2) == width + i)
                cout << "|";
            else
                cout << " ";
        }
        x--;
        cout << endl;
    }
    return 0;
}