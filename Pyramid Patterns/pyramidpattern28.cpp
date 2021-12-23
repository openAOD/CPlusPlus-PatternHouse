#include <iostream>
using namespace std;

int counter = 1;

void printPattern (int);
void printWhitespaces (int);
void printNumbers (int);

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

    int whiteSpaces = (totalLines / 2), counter = 1;

    for (int i = 1; i <= totalLines; i++) {

        if ((i & 1) == 0) {

            cout << "\n";
            continue;
        }

        printWhitespaces(whiteSpaces);
        printNumbers(i);

        whiteSpaces--;
        cout << "\n";
    }

}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "    ";
    }
}

void printNumbers (int total) {

    int middle = ((total + 1) / 2), initialCounter = counter;

    for (int k = 1; k <= total; k++) {

        cout.width(3);
        cout << (counter * counter) << " ";
        counter++;
    }
}