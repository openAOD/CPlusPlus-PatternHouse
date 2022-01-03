#include <iostream>
using namespace std;

int main()
{
    int size=5;
    char prt='A';
    int chk=0;
    
    for(int i=1;i<size+1;i++){
        char ch=prt;
        for(int j=1;j<size+1;j++){
            if(j<=chk)
                cout<<prt<<" ";
            else
                cout<<ch++<<" ";
        }
        prt++;
        chk++;
        cout<<endl;
    }

    return 0;
}
