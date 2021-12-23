#include<iostream>
#include<strings.h>

using namespace std;

void printPattern (int totalLines)
{
      string evenLine = "* "; // token for even-numbered line
      string oddLine = "# "; // token for odd-numbered line
      string s;
      int i, j;

      for ( i = totalLines; i >= 1; i--)
      {
            for ( j = 0; j < totalLines - i; j++) //intial whitespace
            {
                  cout << " ";
            }

            s = i % 2 == 0? evenLine : oddLine; //string token to be printed this line
            for ( j = 0; j < i; j++)
            {
                  cout << s;
            }

            for ( j = 0; j < totalLines - i; j++) //final whitespace
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
