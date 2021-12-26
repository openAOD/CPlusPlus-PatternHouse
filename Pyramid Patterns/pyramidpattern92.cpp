#include <iostream>
using namespace std;

void printPattern (int);
void printWhitespace (int);
void upperHalf (int);
void lowerHalf (int);

int main () {

    int totalColumns, totalLines;

    cout << "How many columns to be printed? -- ";
    fflush(stdout);
    cin >> totalColumns;

    totalLines = ((2 * totalColumns) - 1);

    cout << "\nYour pattern looks like this:\n" ;
    cout << "\n";

    printPattern (totalLines);

    cout << "\n";
    return 0;
}

void printPattern (int totalLines) {

    int upperLines = ((totalLines + 1) / 2), lowerLines = (totalLines - upperLines);

    upperHalf (upperLines);
    lowerHalf (lowerLines);
}

void upperHalf (int total) {

    for (int i = 1; i <= total; i++) {

        printWhitespace ((total - i));

        for (int j = 1; j <= i; j++) {

            ((j == 1) || (j == i)) ? cout << "* " : cout << "  ";
        }

        cout << "\n";
    }
}

void lowerHalf (int total) {

    int itr = 1;

    for (int i = total; i >= 1; i--) {

        printWhitespace (itr++);

        for (int j = 1; j <= i; j++) {

            ((j == 1) || (j == i)) ? cout << "* " : cout << "  ";
        }

        cout << "\n";
    }
}

void printWhitespace (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "  ";
    }
}