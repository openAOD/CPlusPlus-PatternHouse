#include<iostream>
using namespace std;

int main()
{
      int i, j;
      for( i = 4; i >= 0; i--)
      {

            for(j = 0; j < 5; j++)
            {
                  if ( i % 4 == 0)
                  {
                        cout << " *";
                  }
                  else if (i == j)
                  {
                        cout << " *";
                  }
                  else
                  {
                        cout << "  ";
                  }
            }
            cout << "\n";
      }
}