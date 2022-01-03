#include<iostream>
using namespace std;
int main(){
    int height = 5;
    int i, j, counter = height - 1;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1
                || j == counter)
                cout <<"*";
            else
                cout <<" ";
        }
        counter--;
        cout <<"\n";
    }
    return 0;
}