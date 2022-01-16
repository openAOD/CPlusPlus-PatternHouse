#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 0; i < 5; i++)
      {
            for( j = 0; j < 7; j++)
            {
                  if( j % 6 == 0)
                        cout << " *";
                  else if( i == 1 && j == 3)
                        cout << " *";
                  else if( i == 2 && (j == 2 || j == 4))
                        cout << " *";
                  else if( i == 3 && (j == 1 || j == 5))
                        cout << " *";
                  else
                        cout << "  ";
            }
            cout << "\n";
      }
}