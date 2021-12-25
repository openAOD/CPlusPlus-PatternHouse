
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    bool flag = true;
    int c = 1;
    vector<int> m[5];
    for (int i = 0; i < 5; i++)
    {
        if (flag == true)
        {
            for (int j = 0; j < 5; j++)
            {
                m[j].push_back(c);
                c++;
            }
        }
        else
        {
            for (int j = 4; j >= 0; j--)
            {
                m[j].push_back(c);
                c++;
            }
        }
        flag = !flag;
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