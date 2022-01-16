#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 0; i < 5; i++)
      {
            for( j = 0; j < 5; j++)
            {
                  if(i == 4)
                        cout << " *";
                  else if( j % 4 == 0)
                        cout << " *";
                  else
                        cout << "  ";
            }
            cout << "\n";
      }
}