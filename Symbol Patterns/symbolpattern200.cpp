#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i == 0; i < 5; i++)
      {
            for( j = 0; j < 5; j++)
            {
                  if( i == 0)
                        cout << " *";
                  else if( j == 2)
                        cout << " *";
                  else
                        cout << "  ";
            }
            cout << "\n";
      }
}