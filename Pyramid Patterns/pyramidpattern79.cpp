#include <iostream>
using namespace std;

int counter = 1;

void printPattern (int);
void printStar (int);
void printNumberPattern (int);

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

    int totalNumber, totalStar;

    for (int i = 1; i <= totalLines; i++) {

        totalStar = (totalLines - i);
        totalNumber = ((2 * i) - 1);

        printStar (totalStar);
        printNumberPattern (totalNumber);
        printStar (totalStar);

        cout << endl;
    }
}

void printStar (int total) {

    for (int i = 1; i <= total; i++) {

        cout << " * ";
    }
}

void printNumberPattern (int total) {

    int update = 1, changeUpdate = ((total + 1) / 2);

    for (int j = 1; j <= total; j++) {

        cout.width(2);
        cout << counter << " ";

        if (j == changeUpdate) {

            update *= -1;
        }

        counter += update;
    }

    counter += 2;
}