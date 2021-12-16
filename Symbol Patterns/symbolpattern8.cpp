#include <iostream>
using namespace std;

int main()
{
    int space = 5; 
    for (int i = 0; i <= 5; i++)
    {
        for (int k = 0; k < space; k++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        space--;
        cout << endl;
    }
    return 0;
}