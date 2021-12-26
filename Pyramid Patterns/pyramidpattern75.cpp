#include <iostream>
using namespace std;

char alphabet = 'A';
int counter = 1;

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

    int whiteSpace, printStar;

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printStar = ((2 * i) - 1);

        for (int j = 1; j <= printStar; j++) {

            if (i & 1) {

                cout << counter++ << " ";
            } else {

                cout << alphabet++ << " ";
            }

            if (counter > 9) {

                counter = 1;
            }

            if (alphabet > 'Z') {

                alphabet = 'A';
            }
        }

        cout << "\n";
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "  ";
    }
}