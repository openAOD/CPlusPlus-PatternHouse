#include<iostream>
using namespace std;

void printPattern (int);
void printUpperHalf (int, int);
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

    int reset = ((totalLines + 1) / 2);

    printUpperHalf (totalLines, reset);
    printLowerHalf (totalLines, reset);
}

void printUpperHalf (int totalLines, int reset) {
    
    int printStar = 1;

    for (int i = 1; i <= reset; i++) {

        for (int j = 1; j <= totalLines; j ++) {

            if (i & 1) {

                if (j <= printStar) {

                    cout << "* ";
                } else {

                    cout << "# ";
                }
            } else {

                if ((totalLines - j) < printStar) {

                    cout << "* ";
                } else {

                    cout << "# ";
                }
            }
        }

        printStar++;
        
        if (printStar > reset) {

            printStar = ((printStar % reset) + 1);
        }

        cout << endl;
    }
}

void printLowerHalf (int totalLines, int reset) {

    int printStar = 1;

    for (int i = 1; i <= (totalLines - reset); i++) {

        for (int j = 1; j <= totalLines; j ++) {

            if (i & 1) {

                if (j <= printStar) {

                    cout << "* ";
                } else {

                    cout << "# ";
                }
            } else {

                if ((totalLines - j) < printStar) {

                    cout << "* ";
                } else {

                    cout << "# ";
                }
            }
        }

        printStar++;
        
        if (printStar > reset) {

            printStar = ((printStar % reset) + 1);
        }

        cout << endl;
    }
}