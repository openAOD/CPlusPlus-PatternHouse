#include <iostream>
using namespace std;

int main()
{
    string str = "HOUSE";
    int len = str.size();
    
    for(int i = 0; i < len; i++) {
        for(int j = 0; j <= i; j++)
            cout << str[j] << " ";
        cout << endl;
    }
    return 0;
}