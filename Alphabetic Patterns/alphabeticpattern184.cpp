#include<iostream>
using namespace std;
int main(){
    int height = 5;
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                || i == height - 1))
                cout <<"S";
            else if (i < height / 2
                    && j == 0)
                cout <<"S";
            else if (i > height / 2
                    && j == height - 1)
                cout <<"S";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
    return 0;
}