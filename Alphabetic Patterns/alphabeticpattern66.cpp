#include <iostream>
using namespace std;

int main()
{
    int size=5;
    char prt='A';
    
    for(int i=1;i<size+1;i++){
        char ch='A';
        for(int j=1;j<size+1;j++){
            if(j>=i)
                cout<<prt<<" ";
            else
                cout<<ch++<<" ";
        }
        prt++;
        cout<<endl;
    }

    return 0;
}
