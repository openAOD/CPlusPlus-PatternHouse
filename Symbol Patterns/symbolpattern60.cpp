#include<iostream>
using namespace std;

void printPattern (int);

int main()
{
    system("cls");

    int totalLines;

    cout << "How many lines to be printed? --> ";
    cin >> totalLines;

    cout << "\nYour pattern looks like this:\n" << endl;
    printPattern(totalLines);

    cout<<"\n";
    return 0;
}

void printPattern (int totalLines) {

    int whiteSpace, itr;

    for (int i = totalLines; i >= 1; i--) {

        itr = 1;
        whiteSpace = (totalLines - i);

        for (int i = 1; i <= whiteSpace; i++) {
            
            cout << "   ";
            itr++;
        }

        for (int j = i; j >= 1; j--) {

            if (itr & 1) {

                cout.width(2);
                cout << j << " ";
            } else {

                cout << " * ";
            }
            
            itr++;
        }

        cout << endl;
    }
    
}