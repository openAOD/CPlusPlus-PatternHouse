#include <iostream>
using namespace std;

int main()
{
    string str = "HOUSE";
    int len = str.size();
    
    for(int i = 0; i < len; i++) {
        for(int j = 1; j <= len; j++)
            cout << str[len - j] << " ";
        cout << endl;
    }
    return 0;
}