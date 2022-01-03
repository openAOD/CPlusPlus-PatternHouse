#include <iostream>
using namespace std;

int main()
{
    int size=5;
    char prt='E';
    int chk=0;
    
    for(int i=1;i<size+1;i++){
        char ch='A';
        for(int j=1;j<size+1;j++){
            if(j>=size+1-chk)
                cout<<prt<<" ";
            else
                cout<<ch++<<" ";
        }
        prt--;
        chk++;
        cout<<endl;
    }

    return 0;
}
