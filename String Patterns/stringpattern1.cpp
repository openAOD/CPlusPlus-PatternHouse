#include <iostream>
using namespace std;

int main()
{
    string str = "HOUSE";
    for(int i = 0; i < str.size(); i++) {
        for(int j = 0; j < str.size(); j++)
            cout << str[j] << " ";
        cout << endl;
    }
    return 0;
}