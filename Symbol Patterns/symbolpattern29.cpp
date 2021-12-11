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

    int counter = 1;

    for (int i = 1; i <= totalLines; i++) {

        for (int j = 1; j <= totalLines; j++) {

            if ((i & 1)) {

                if (!(j & 1)) {

                    cout.width(2);
                    cout << counter++ << " ";
                } else {

                    cout << " * ";
                }
            } else {

                if ((j & 1)) {

                    cout.width(2);
                    cout << counter++ << " ";
                } else {

                    cout << " * ";
                }
            }
        }

        cout << endl;
    }
    
}