#include <iostream>
using namespace std;

int counter = 1;

void printPattern (int);
void upperHalf (int);
void lowerHalf (int);

int main () {

    int totalLines;

    cout << "How many lines to be printed? -- ";
    fflush(stdout);
    cin >> totalLines;

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

    int printNumber;

    for (int i = 1; i <= total; i++) {

        printNumber = ((2 * i) - 1);
        counter = ((2 * i) - 1);

        for (int j = 1; j <= printNumber; j++) {

            cout.width(2);
            cout << counter << " ";
        }

        cout << "\n";
    }
}

void lowerHalf (int total) {

    int printNumber;

    for (int i = total; i >= 1; i--) {

        printNumber = ((2 * i) - 1);
        counter = ((2 * i) - 1);

        for (int j = 1; j <= printNumber; j++) {

            cout.width(2);
            cout << counter << " ";
        }

        cout << "\n";
    }
}