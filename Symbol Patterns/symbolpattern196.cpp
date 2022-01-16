#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 0; i < 5; i++)
      {
            for( j = 0; j < 3; j++)
            {
                  if( i == 0 || i == 2)
                        cout << " *";
                  else if( i < 2 && (j == 0 || j == 2))
                        cout << " *";
                  else if( i > 2 && j == 0)
                        cout << " *";
                  else
                        cout << "  ";
            }
            cout << "\n";
      }
}