#include<iostream>
using namespace std;

void printPattern (int);
void printWhitespace (int total);

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

    int whiteSpace, itr = 1;

    for (int i = totalLines; i >= 1; i--) {

        whiteSpace = (totalLines - i);
        printWhitespace (whiteSpace);

        for (int j = i; j >= 1; j--) {

            if (itr & 1) {

                cout.width(2);
                cout << i << " ";
            } else {

                cout << " * ";
            }
        }

        itr++;
        cout << endl;
    }
    
}

void printWhitespace (int total) {

    for (int i = 1; i <= total; i++) {
        
        cout << "   ";
    }
    
}