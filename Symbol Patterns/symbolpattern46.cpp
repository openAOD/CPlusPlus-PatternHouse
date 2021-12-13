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

    bool printStar = false;

    for (int i = totalLines; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {

            if (!printStar) {

                cout << j << " ";
            } else {

                cout << "* ";
            }
        }

        if (printStar) {

            printStar = false;
        } else {

            printStar = true;
        }

        cout << endl;
    }
}