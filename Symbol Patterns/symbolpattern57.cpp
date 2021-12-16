#include<iostream>
using namespace std;

void printPattern (int);
void swapCharacters (char &);

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
    char Character;

    for (int i = totalLines; i >= 1; i--) {

        Character = '#';

        whiteSpace = (totalLines - i);   
        
        for (int i = 1; i <= whiteSpace; i++) {
            
            cout << "  ";
            swapCharacters (Character);
        }

        for (int j = i; j >= 1; j--) {

            cout << Character << " ";
            swapCharacters (Character);
        }

        cout << endl;
    }
    
}

void swapCharacters (char &Character) {

    if (Character == '#') {

        Character = '*';
    } else {

        Character = '#';
    }
}