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

    char Alphabet;

    for (int i = 0; i < totalLines; i++) {

        for (int j = (totalLines - 1); j >= 0 ; j--) {

            if (j <= i) {

                Alphabet = (65 + j);
                cout << Alphabet << " ";
            } else {

                cout << "* ";
            }
        }

        cout << endl;
    }
    
}