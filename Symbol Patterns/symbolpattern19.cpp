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

    for (int i = totalLines; i >= 1; i--) {

        for (int j = totalLines; j >= 1; j--) {

            if (j <= i) {

                cout << j << " ";
            } else {

                cout << "* ";
            }
        }

        cout << endl;
    }
    
}