/*
 * Cheyenne Gwinn
 * CS 210 Project Three
 * Corner Grocer Item Tracking Program
 */

#include "GroceryTracker.h"
#include <iostream>

using namespace std;

int main() {
    GroceryTracker tracker;
    int userChoice = 0;

    while (userChoice != 4) {
        tracker.displayMenu();
        cin >> userChoice;

        if (userChoice == 1) {
            tracker.searchItemFrequency();
        }
        else if (userChoice == 2) {
            tracker.printAllFrequencies();
        }
        else if (userChoice == 3) {
            tracker.printHistogram();
        }
        else if (userChoice == 4) {
            cout << "Program ended." << endl;
        }
        else {
            cout << "Invalid option. Please choose 1, 2, 3, or 4." << endl;
        }
    }

    return 0;
}
