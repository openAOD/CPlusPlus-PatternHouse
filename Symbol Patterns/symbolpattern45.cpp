#include<iostream>
using namespace std;

void printPattern (int);
void printUpperHalf (int);
void printLowerHalf (int, int);

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

    int printLines = ((totalLines + 1) / 2);
    printUpperHalf (printLines);

    int startIndex = ((totalLines % 2) + 1);
    printLowerHalf (printLines, startIndex);
    
}

void printUpperHalf (int totalLines) {

    int lastPrint;

    for(int i = totalLines; i >= 1; i--) {

        lastPrint = ((2 * totalLines) - i);

        for (int j = 1; j <= lastPrint; j++) {

            if(j >= i) {

                cout << "* ";
            } else {

                cout << "  ";
            }
        }

        cout << endl;
    }
}

void printLowerHalf (int totalLines, int startIndex) {

    int lastPrint;

    for(int i = startIndex; i <= totalLines; i++) {

        lastPrint = ((2 * totalLines) - i);

        for (int j = 1; j <= lastPrint; j++) {

            if(j >= i) {

                cout << "* ";
            } else {

                cout << "  ";
            }
        }

        cout << endl;
    }
}
