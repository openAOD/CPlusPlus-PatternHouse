#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 0; i < 7; i++)
      {
            for( j = 0; j < 8; j++)
            {
                  if(( i == 0 || i == 5) && j < 7)
                        cout << " *";
                  else if( i < 6 && i != 4 && (j == 0 || j == 6))
                        cout << " *";
                  else if ( i == 4 && (j == 0 || j == 6 || j == 5))
                        cout << " *";
                  else if ( i == 6 && j == 7)
                        cout << " *";
                  else
                        cout << "  ";
            }
            cout << "\n";
      }
}