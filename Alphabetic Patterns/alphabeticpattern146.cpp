#include <iostream>
using namespace std;

int main(){
    int i, j;
    int height = 5;
    int width = 2*height-1;
    width--;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1)
                && (j == 0 || j == width - 1))
                cout <<" ";
            else if (j == 0)
                cout <<"*";
            else if (i == 0 && j <= height)
                cout <<"*";
            else if (i == height / 2
                    && j > height / 2)
                cout <<"*";
            else if (i > height / 2
                    && j == width - 1)
                cout <<"*";
            else if (i == height - 1
                    && j < width)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    return 0;
}