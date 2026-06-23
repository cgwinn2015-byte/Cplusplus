#pragma once

#include <map>
#include <string>

using namespace std;

class GroceryTracker {
private:
    map<string, int> m_itemFrequency;

    void loadItemsFromFile();
    void createBackupFile();

public:
    GroceryTracker();

    void displayMenu();
    void searchItemFrequency();
    void printAllFrequencies();
    void printHistogram();
};
