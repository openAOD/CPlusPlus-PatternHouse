#include <iostream>
using namespace std;

void printPattern (int);
void printWhitespaces (int);
int middleSum (int, int);
int printNumbers (int, int);

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
        counter = printNumbers(i, counter);

        whiteSpaces--;
        cout << "\n";
    }

}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "    ";
    }
}

int printNumbers (int total, int counter) {

    int middle = ((total + 1) / 2), initialCounter = counter;

    for (int k = 1; k <= total; k++) {

        if ((k == middle) && (total != 1)) {

            cout.width(3);
            cout << middleSum(total, initialCounter) << " ";

        } else {
            
            cout.width(3);
            cout << counter << " ";
            counter += 2;
        }
    }

    return counter;
}

int middleSum (int lineNumber, int counter) {

    int sum = 0;

    for (int i = 1; i < lineNumber; i++) {

        sum += counter;
        counter += 2;
    }

    return sum;
}