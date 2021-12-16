#include<iostream>
using namespace std;

void printPattern (int);
void swapCharacters (char &);
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

    int whiteSpace;
    char Character = '#';

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printWhitespace (whiteSpace);

        for (int j = 1; j <= i; j++) {

            cout << Character << " ";
        }

        swapCharacters (Character);
        cout << endl;
    }
    
}

void printWhitespace (int total) {

    for (int i = 1; i <= total; i++) {
        
        cout << "  ";
    }
    
}

void swapCharacters (char &Character) {

    if (Character == '#') {

        Character = '*';
    } else {

        Character = '#';
    }
}