// driver.cpp, Nejdet Eren Pinaz
//
// This program initializes the whole system.

#include <iostream>

#include "Database.h"

using namespace std;

int main() {
    int input;

    do {
        cout << endl << "Composer Database" << endl;
        cout << "---------------------------------------------" << endl;

        cout << "1) Add a new composer" << endl;
        cout << "2) Retrieve a composer's data" << endl;
        cout << "3) Promote/demote a composer's rank" << endl;
        cout << "4) List all composers" << endl;
        cout << "5) List all composers by rank" << endl;
        cout << "0) Quit" << endl << endl;

        cout << "Select menu item: ";
        cin >> input;

        switch (input) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                break;
        }

    } while (input != 0);
}