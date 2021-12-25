#include <iostream>
using namespace std;

void printPattern (int);
void printNumber (int);
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

    int totalNumber, printStar;

    for (int i = 1; i <= totalLines; i++) {

        totalNumber = (totalLines - i);
        printStar = ((2 * i) - 1);

        printNumber (totalNumber);
        printStarPattern (printStar);
        printNumber (totalNumber);

        cout << endl;
    }
}

void printNumber (int total) {

    for (int i = 1; i <= total; i++) {

        cout.width (2);
        cout << i << " ";
    }
}

void printStarPattern (int total) {

    for (int j = 1; j <= total; j++) {

        cout << " * ";
    }
}