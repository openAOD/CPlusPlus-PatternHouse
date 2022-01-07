#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
  for(int i=0; i<mCols; i++) {
    int j = i % 2 == 0 ? 0 : nRows-1;
    while(i % 2 == 0 ? j<nRows : j >= 0) {
      cout << input[j][i] << " ";
      i % 2 == 0 ? j++ : j--;
    }
  }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}