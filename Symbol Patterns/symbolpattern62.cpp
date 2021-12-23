#include<iostream>
#include<strings.h>

using namespace std;

void printPattern (int totalLines)
{
      string oddLineB = "# ";
      string evenLineB = "* ";
      string s;
      int i, j;

      for ( i = 1; i <= totalLines; i++)
      {
            for ( j = 0; j < totalLines - i; j++)
            {
                  cout << " ";
            }

            s = i % 2 == 0? evenLineB : oddLineB;
            for ( j = 0; j < i; j++)
            {
                  cout << s;
                  s = s == evenLineB? oddLineB : evenLineB;
            }

            for ( j = 0; j < totalLines -i; j++)
            {
                  cout << " ";
            }

            cout << "\n";
      }

}

int main()
{
      int totalLines;

      cout << "\nHow many lines do you want to be printed?\n";
      cin >> totalLines;

      cout << "\nYour pattern looks like this :\n";
      printPattern(totalLines);

      cout << "\n";
      return 0;
}