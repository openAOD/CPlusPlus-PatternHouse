#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 0; i < 5; i++)
      {
            for( j = 0; j < 9; j++)
            {
                  if(j == i || j == 8-i)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
}