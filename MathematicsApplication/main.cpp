#include <iostream>
#include "Mathematics.h"

using namespace std;

/**
 * @brief Main function to demonstrate the usage of the Mathematics class.
 * @return Exit status of the program.
 */
int main() {
    cout << "Welcome to the Mathematics application!"
         << "\nPlease enter a choice using the corresponding numerical value (ie: for Addition, type 1 and hit enter, etc..): "
         << "\n1. Addition"
         << "\n2. Subtraction"
         << "\n3. Multiplication"
         << "\n4. Division"
         << "\n5. Modulus Remainder\n"
         << "--------------------------"
         << "\n6. Quit\n";

    int choice = 0;

    while (choice != 6) {
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            float x, y, result;
            cout << "Please enter the first number: ";
            cin >> x;
            cout << "Please enter the second number: ";
            cin >> y;

            if (choice == 1)
            {
                result = Mathematics::Addition(x, y);
                cout << "Result of adding " << x << " + " << y << " = " << result << endl;
            }
            else if (choice == 2)
            {
                result = Mathematics::Subtraction(x, y);
                cout << "Result of subtracting " << x << " from " << y << " = " << result << endl;
            }
            else if (choice == 3)
            {
                result = Mathematics::Multiplication(x, y);
                cout << "Result of multiplying " << x << " by " << y << " = " << result << endl;
            }
            else if (choice == 4) {
                result = Mathematics::Division(x, y);
                cout << "Result of dividing " << x << " by " << y << " = " << result << endl;
            }
            else if (choice == 5)
            {
                result = Mathematics::Modulus(x, y);
                cout << "Remainder of the division of " << x << " by " << y << " = " << result << endl;
            }
        } else if (choice == 6)
        {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice! Please enter a valid choice (1-5)." << endl;
        }
    }

    return 0;
}

