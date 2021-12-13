#include<iostream>
using namespace std;

void printPattern (int);
char sawpCharacters (char);


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

    char character;

    for (int i = totalLines; i >= 1; i--) {

        character = '#';

        for (int j = 1; j <= i; j++) {

            cout << character << " ";
            character = sawpCharacters (character);
        }

        cout << endl;
    }
}

char sawpCharacters (char character) {

    if (character == '#') {
        
        character = '*';
        return character;
    } else {

        character = '#';
        return character;
    }
}