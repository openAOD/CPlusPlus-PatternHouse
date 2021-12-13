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

    int columns, counter;

    for (int i = 1; i <= totalLines; i++) {

        columns = ((2 * i) - 1);
        counter = 1;

        for (int j = 1; j <= columns; j++) {

            if (j & 1) {

                cout << counter++ << " ";
            } else {

                cout << "* ";
            }
        }
        cout << endl;
    }
}