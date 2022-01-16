#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 0; i < 5; i++)
      {
            for( j = 0; j < 5; j++)
            {
                  if( i % 2 == 0)
                        cout << " *";
                  else if ( i == 1 && j == 0)
                        cout << " *";
                  else if ( i == 3 && j == 4)
                        cout << " *";
                  else
                        cout << "  ";
            }
            cout << "\n";
      }
}