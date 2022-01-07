#include<iostream>
using namespace std;

int main()
{
	int rows;

	cout << "Enter Right Traingle of Numbers in Sine Wave Rows = ";
	cin >> rows;

	cout << "Right Traingle of Numbers in Sine Wave format\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j % 2 == 0)
			{
				cout << 1 + j * rows - (j - 1) * j / 2 + i - j << " ";
			}
			else
			{
				cout << 1 + j * rows - (j - 1) * j / 2 + rows - i - 1 << " ";
			}
		}
		cout << "\n";
	}
}