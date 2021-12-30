#include <iostream>
using namespace std;
int main(){
    int height=5;
    int width = 2*height-1;
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == counter
                || j == width - counter - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        counter++;
        cout <<"\n";
    }
    return 0;
}