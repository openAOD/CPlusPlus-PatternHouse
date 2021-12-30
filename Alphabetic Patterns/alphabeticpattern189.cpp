#include<iostream>
using namespace std;
int main(){
    int height = 5;
    int i, j, counter = 0;
    for (i = 0; i <= height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter
                || j == height - counter)
                cout <<"X";
            else
                cout <<" ";
        }
        counter++;
        cout <<"\n";
    }
    return 0;
}