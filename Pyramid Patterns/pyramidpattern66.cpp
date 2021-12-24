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

    int whiteSpace, printStar, itr = 1;

    for (int i = totalLines; i >= 1; i--) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printStar = ((2 * i) - 1);

        for (int j = 1; j <= printStar; j++) {

            if (itr & 1) {

                cout.width(2);
                (j & 1) ? cout << i << " " : cout << "   ";
            } else {

                (j & 1) ? cout << " * " : cout << "   ";
            }
        }

        itr++;
        cout << "\n";
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "   ";
    }
}