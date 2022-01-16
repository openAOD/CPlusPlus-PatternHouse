#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 0; i < 7; i++)
      {
            for( j = 0; j < 4; j++)
            {
                  if ( i == 0 || i == 3)
                        cout << " *";
                  else if (i < 3 && (j == 0 || j == 3))
                        cout << " *";
                  else if( i > 3 && (j == 0 || j == i-3))
                        cout << " *";
                  else
                        cout << "  ";
            }
            cout << "\n";
      }
}