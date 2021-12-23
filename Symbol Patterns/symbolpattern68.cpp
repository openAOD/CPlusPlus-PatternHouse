#include<iostream>
#include<strings.h>

using namespace std;

void printPattern (int totalLines)
{
      string s = "* ";
      int i, j;

      for( i = totalLines-1; i >= 0; i--)
      {
            cout << i << " ";

            for( j = 0; j < i; j++)
            {
                  cout << s;
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