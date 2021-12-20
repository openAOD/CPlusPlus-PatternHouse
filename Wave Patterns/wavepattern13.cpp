#include <iostream>
using namespace std;

int main() 
{
    int height = 4, length = 4;
    int x = height - 1;
    char ch;
    for(int i = 0; i <= height; i++) {
        ch = 'a';
        for(int j = 0; j < height*length*2; j++) {
            if(j % (height*2) == x || j % (height*2) == height + i)
                cout << ch << " ";
            else
                cout << " ";
            ch++;
            if(ch > 'z')
                ch = ch - 26;
        }
        x--;
        cout << endl;
    }
    return 0;
}