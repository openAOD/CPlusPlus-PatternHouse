#include <iostream>
using namespace std;

void printPattern (int);
void printWhitespaces (int);

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

    int whiteSpace, printNumber, counter = totalLines;

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printNumber = ((2 * i) - 1);

        for (int j = 1; j <= printNumber; j++) {

            cout.width(2);
            cout << counter << " ";
        }

        counter--;
        cout << endl;
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "   ";
    }
}