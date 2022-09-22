// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <math.h>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    // I recommend writing your factorial code here
    int n;
    long factorial = 1.0;
    cout << "Enter an integer: ";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }

}
void arithmetic() {
    // I recommend writing your arithmetic series code here
    double a, d, n, i, sum, j;
    char flag = 'y';

    cout << "Enter starting value ";
    cin >> a;
    cout << "Enter difference ";
    cin >> d;
    cout << "Enter a term ";
    cin >> n;
    cout << endl;

    while (i = 1, i <= n, i++)
    {
        while (a <= n)
        {
            a = a + d;
            cout << a << " , ";
        }
        for (int i = a; i < ((n - 1) * d + a); i += d)
        {
            sum += i;
            std::cout << i << ", ";
        }
        break;
    }

}
void geometric()
{
    float g1, cr, i, n, j;
    int ntrm, gpn;
    float sum = 0;
    cout << "\n\n Find the Sum of GP series:\n";
    cout << "-------------------------------\n";
    cout << " Input  the starting number of the G.P. series: ";
    cin >> g1;
    cout << " Input the number of items for  the G.P. series: ";
    cin >> ntrm;
    cout << " Input the common ratio of G.P. series: ";
    cin >> cr;
    cout << "\nThe numbers for the G.P. series:\n ";
    cout << g1 << "  ";
    sum = g1;
    for (j = 1; j < ntrm; j++)
    {
        gpn = g1 * pow(cr, j);
        sum = sum + gpn;
        cout << gpn << "  ";
    }
    cout << "\n The Sum of the G.P. series:  " << sum << endl;
}
int main() {
    int choice;
    char again;
    do {
        printMenu();
        cin >> choice;

        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }
        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            //geometric();
        }
        cout << " Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}