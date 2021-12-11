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

    int counter = 0;
    char Alphabet;

    for (int i = 1; i <= totalLines; i++) {

        for (int j = 1; j <= totalLines; j++) {

            if ((i & 1)) {

                if (!(j & 1)) {

                    Alphabet = (65 + (counter++));
                    counter %= 26;

                    cout << Alphabet << " ";
                } else {

                    cout << "* ";
                }
            } else {

                if ((j & 1)) {

                    Alphabet = (65 + (counter++));
                    counter %= 26;
                    
                    cout << Alphabet << " ";
                } else {

                    cout << "* ";
                }
            }
        }

        cout << endl;
    }
    
}