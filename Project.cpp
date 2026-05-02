#include <iostream>
using namespace std;

int main()
{
    int mainChoice, itemChoice;
    float total = 0.0;
    cout << "\n===== Welcome To Restaurant =====\n"
         << endl;
    // Loop for the main menu
    while (true)
    {
        cout << "\n===== Our Special Menu =====\n"
             << endl;
        cout << "1. Fast Food\n";
        cout << "2. Tikka\n";
        cout << "3. Shakes\n\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1:
        { // Fast Food
            cout << "\nFast Food Menu:\n";
            cout << "1. Burger (Rs.500)\n";
            cout << "2. Pizza (Rs.800)\n";
            cout << "3. Fries (Rs.250)\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;

            if (itemChoice == 1)
            {
                total += 500.0;
                cout << "You have selected Burger (Rs.500)\n";
            }
            else if (itemChoice == 2)
            {
                total += 800.0;
                cout << "You have selected Pizza (Rs.800)\n";
            }
            else if (itemChoice == 3)
            {
                total += 250.0;
                cout << "You have selected Fries (Rs.250)\n";
            }
            else
            {
                cout << "Invalid choice! Please try again.\n";
            }
            break;
        }

        case 2:
        { // Tikka
            cout << "\nTikka Menu:\n";
            cout << "1. Chicken Tikka (Rs.1000)\n";
            cout << "2. Malai Boti (Rs.900)\n";
            cout << "3. Fish Tikka (Rs.1200)\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;

            if (itemChoice == 1)
            {
                total += 1000.0;
                cout << "You have selected Chicken Tikka (Rs.1000)\n";
            }
            else if (itemChoice == 2)
            {
                total += 900.0;
                cout << "You have selected Malai Boti (Rs.900)\n";
            }
            else if (itemChoice == 3)
            {
                total += 1200.0;
                cout << "You have selected Fish Tikka (Rs.1200)\n";
            }
            else
            {
                cout << "Invalid choice! Please try again.\n";
            }
            break;
        }

        case 3:
        { // Shakes
            cout << "\nShakes Menu:\n";
            cout << "1. Chocolate Shake (Rs.600)\n";
            cout << "2. Strawberry Shake (Rs.500)\n";
            cout << "3. Vanilla Shake (Rs.400)\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;

            if (itemChoice == 1)
            {
                total += 600.0;
                cout << "You have selected Chocolate Shake (Rs.600)\n";
            }
            else if (itemChoice == 2)
            {
                total += 500.0;
                cout << "You have selected Strawberry Shake (Rs.500)\n";
            }
            else if (itemChoice == 3)
            {
                total += 400.0;
                cout << "You have selected Vanilla Shake (Rs.400)\n";
            }
            else
            {
                cout << "Invalid choice! Please try again.\n";
            }
            break;
        }

        default:
            cout << "Invalid choice! Please try again.\n";
        }

        cout << "If Order is completed then press 0, otherwise press 1 : ";
        cin >> mainChoice;

        if (mainChoice == 0)
        {
            cout << "Exiting the system. Thank you!\n";
            break;
        }
    }

    // Final bill
    cout << "\n===== Final Bill =====\n";
    cout << "Total amount: Rs." << total << endl;

    return 0;
}
