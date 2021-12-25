#include <iostream>
using namespace std;

void printPattern (int);
void printWhitespaces (int);        // Function to print whitespaces
void printStarPattern (int);        // Function to print triangle of stars

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

    // Loop to print upper triangle of stars
    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = ((2 * totalLines) - i);
        printStar = ((2 * i) - 1);

        printWhitespaces (whiteSpace);
        printStarPattern (printStar);

        cout << endl;
    }

    // Loop to print left & right triangles of stars
    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);
        printStar = ((2 * i) - 1);

        // Printing left triangle
        printWhitespaces (whiteSpace);
        printStarPattern (printStar);

        printWhitespaces (whiteSpace);
        cout << " ";

        // Printing right triangle
        printWhitespaces (whiteSpace);
        printStarPattern (printStar);

        cout << endl;
    }
}

// Function to print whitespaces
void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << " ";
    }
}

// Function to print triangle of stars
void printStarPattern (int total) {

    for (int j = 1; j <= total; j++) {

        (j & 1) ? cout << "*" : cout << " ";
    }
}