#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

GroceryTracker::GroceryTracker() {
    loadItemsFromFile();
    createBackupFile();
}

void GroceryTracker::loadItemsFromFile() {
    ifstream inputFile("CS210_Project_Three_Input_File.txt.txt");
    string itemName;

    if (!inputFile.is_open()) {
        cout << "Error: Could not open input file." << endl;
        return;
    }

    while (inputFile >> itemName) {
        m_itemFrequency[itemName]++;
    }

    inputFile.close();
}

void GroceryTracker::createBackupFile() {
    ofstream outputFile("frequency.dat");

    for (auto item : m_itemFrequency) {
        outputFile << item.first << " " << item.second << endl;
    }

    outputFile.close();
}

void GroceryTracker::displayMenu() {
    cout << endl;
    cout << "Corner Grocer Item Tracking Menu" << endl;
    cout << "--------------------------------" << endl;
    cout << "1. Search for an item" << endl;
    cout << "2. Print all item frequencies" << endl;
    cout << "3. Print item frequency histogram" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void GroceryTracker::searchItemFrequency() {
    string itemName;

    cout << "Enter the item you want to search for: ";
    cin >> itemName;

    cout << itemName << " appears " << m_itemFrequency[itemName] << " time(s)." << endl;
}

void GroceryTracker::printAllFrequencies() {
    cout << endl;
    cout << "Item Frequencies" << endl;
    cout << "----------------" << endl;

    for (auto item : m_itemFrequency) {
        cout << left << setw(15) << item.first << item.second << endl;
    }
}

void GroceryTracker::printHistogram() {
    cout << endl;
    cout << "Item Frequency Histogram" << endl;
    cout << "------------------------" << endl;

    for (auto item : m_itemFrequency) {
        cout << left << setw(15) << item.first;

        for (int i = 0; i < item.second; i++) {
            cout << "*";
        }

        cout << endl;
    }
}