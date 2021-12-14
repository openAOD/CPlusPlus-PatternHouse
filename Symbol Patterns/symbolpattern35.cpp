#include<iostream>
using namespace std;

void printPattern (int);


int main()
{
    system("cls");

    int totalLines;

    cout << "How many lines to be printed? --> ";
    cin >> totalLines;

    cout << "\nYour pattern looks like this:\n" << endl;
    printPattern(totalLines);

    cout<<"\n";
    return 0;
}

void printPattern (int totalLines) {

    int columns, startCounter = 0, previousEnd = 0, endCounter = 0;

    for (int i = 1; i <= totalLines; i++) {

        columns = ((2 * i) - 1);

        startCounter = (previousEnd + 1);
        endCounter = (previousEnd + i);

        previousEnd = endCounter;

        for (int j = 1; j <= columns; j++) {

            if (i & 1) {

                if (j & 1) {

                    cout.width(2);
                    cout << startCounter++;
                } else {

                    cout << " * ";
                }
            } else {

                if (j & 1) {

                    cout.width(2);
                    cout << endCounter--;
                } else {

                    cout << " * ";
                }
            }
        }

        cout << endl;
    }
}