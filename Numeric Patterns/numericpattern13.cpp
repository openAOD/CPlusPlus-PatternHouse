
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{

    int c = 1;
    vector<int> m[5];
    for (int i = 0; i < 5; i++)
    {

        for (int j = 4; j >= 0; j--)
        {
            m[j].push_back(c);
            c++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << setw(3) << m[i][j];
        }
        cout << endl;
    }

    return 0;
}