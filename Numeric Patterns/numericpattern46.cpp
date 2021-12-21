#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr[5];
    int c = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            arr[j + 5 - i].push_back(c);
            c++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= arr[i].size() - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}