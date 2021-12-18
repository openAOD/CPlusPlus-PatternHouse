#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    for (int i = 1; i <= rows; i++)
    { 
        for (int j = i; j < rows; j++)
            cout << " "; 
        for (int j = 1; j <= i; j++)
            cout << "*"; 
        cout << "\n";
    }
    for (int i = rows; i >= 1; i--)
    { 
        for (int j = i; j <= rows; j++)
            cout << " "; 
        for (int j = 1; j < i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}