#include <iostream>
using namespace std;

void printPattern (int);
void printWhitespaces (int);
void printStarPattern (int);

int main () {

    int totalLines;

    cout << "How many lines to be printed? -- ";
    fflush(stdout);
    cin >> totalLines;

    cout << "\nYour pattern looks like this:\n";
    cout << "\n";

    printPattern (totalLines);

    cout << "\n";
    return 0;
}

void printPattern (int totalLines) {

    int whiteSpace, printStar;

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printStar = ((2 * i) - 1);

        printWhitespaces (whiteSpace);
        printStarPattern (printStar);

        printWhitespaces (whiteSpace);

        printWhitespaces (whiteSpace);
        printStarPattern (printStar);

        cout << endl;
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "  ";
    }
}

void printStarPattern (int total) {

    for (int j = 1; j <= total; j++) {

        cout << "* ";
    }
}