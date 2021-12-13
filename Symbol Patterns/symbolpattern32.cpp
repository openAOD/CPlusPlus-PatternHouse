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

    int columns, lastStar;
    columns = lastStar = ((2 * totalLines) - 1);

    for (int i = 1; i <= totalLines; i++) {

        for (int j = 1; j <= columns; j++) {

            if ((j == i) || (j == totalLines) || (j == (lastStar))) {

                cout << "* ";
            } else {

                cout << "0 ";
            }
        }

        lastStar--;
        cout << endl;
    }
}