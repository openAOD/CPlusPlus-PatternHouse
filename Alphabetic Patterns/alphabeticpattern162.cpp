#include <iostream>
using namespace std;
int main(){
    int height = 5;
    int i, j, counter = height / 2;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j <= height; j++) {
            if (j == height)
                cout <<"*";
            else if ((i >= height / 2)
                    && (j == counter
                        || j == height - counter - 1))
                cout <<"*";
            else
                cout <<" ";
        }
        if (i >= height / 2) {
            counter++;
        }
        cout <<"\n";
    }
    return 0;
}