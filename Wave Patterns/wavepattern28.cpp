#include<bits/stdc++.h>
using namespace std;
void printWavePattern(string s, int n) {
   if (n==1) {
      cout<<s;
      return;
   }
   int len=s.length();
   char a[len][len]={ };
   int row=0;
   bool down;
   for (int i=0; i<len; i++) {
      a[row][i]=s[i];
      if (row==n-1)
         down=false;
      else if (row==0)
         down=true;
         (down)?(row++):(row--);
   }
   for (int i=0; i<n; i++) {
      for (int j=0; j<len; j++) {
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
}
int main() {
   string s;
   cout<<"Enter String\n";
   cin>>s;
   int n;
   cout<<"Enter Line\n";
   cin>>n;
   cout<<n<<" Line wave pattern '"<<str<<"' is:\n";
   printWavePattern(str, n);
}