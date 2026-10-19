/*  Program File Name: Chapter 4 Exercise 2
    Programmer: Christian Min
    Date: 10/18/26
    Requirements:
    Write a program that asks the user to enter a number within the range of 1-10. Use a switch statement to display the roman numeral version of that number.
    *input validation: decide how the program should handle an input hat is less than 1 or greater than 10.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberGiven;    //to hold the value for the variable which the user will enter

    cout << "Enter an integer within the range of 1 through 10: ";
    cin >> numberGiven;

    if (numberGiven < 1 || numberGiven > 10) {      //*input validation: use an if conditional to check that the user's integer is between 1-10, and if not, display the fact

        cout << "\n" << "The integer you have entered is not within the range of 1 through 10!" << "\n";

        return 1;
    }

    cout << "\n" << "The Roman numeral version of your given integer " << numberGiven << " is ";
    switch (numberGiven) {      //use of switch statement to find the respective case, in this case the matching roman numeral for the given integer, and prints it to the console

    case 1:
        cout << "I" << "\n";
        break;
    
    case 2:
        cout << "II" << "\n";
        break;

    case 3:
        cout << "III" << "\n";
        break;

    case 4:
        cout << "IV" << "\n";
        break;

    case 5:
        cout << "V" << "\n";
        break;

    case 6:
        cout << "VI" << "\n";
        break;

    case 7:
        cout << "VII" << "\n";
        break;

    case 8:
        cout << "VIII" << "\n";
        break;

    case 9:
        cout << "IX" << "\n";
        break;

    case 10:
        cout << "X" << "\n";
        break;

    }

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
