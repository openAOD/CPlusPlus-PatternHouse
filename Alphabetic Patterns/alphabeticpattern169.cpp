#include <iostream>
using namespace std;

int main(){

int i, j,height=5;
    for (i = 0; i < height; i++) {
        cout <<"D";
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                cout <<"D";
            else if (j == height - 1 && i != 0
                    && i != height - 1)
                cout <<"D";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    return 0;
}