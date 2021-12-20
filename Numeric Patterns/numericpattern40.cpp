#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr[5];
    int c = 1;
    bool flag = true;
    for (int i = 5; i >= 1; i--)
    {
        if (flag == false)
        {
            for (int j = 0; j < i; j++)
            {
                arr[j + 5 - i].push_back(c);
                c++;
            }
        }
        else
        {
            for (int j = 4; j >= (5 - i); j--)
            {
                arr[j].push_back(c);
                c++;
            }
        }
        flag = !flag;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = arr[i].size() - 1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}