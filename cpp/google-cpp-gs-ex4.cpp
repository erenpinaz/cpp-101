// google-cpp-gs-ex4.cpp: Eren Pinaz
// Description: a guess the number game

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    srand((int)time(0));

    int input = 0;
    int number = rand() % 100 + 1;

    do {
        cout << "Guess the number (1 to 100): ";
        if (!(cin >> input))
        {
            cout << "You entered a non-numeric. Try again." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        if (input < number)
        {
            cout << "You are too low. Go higher." << endl;
        }
        else if (input > number) {
            cout << "You are too high. Go lower." << endl;
        }
        else
            break;
    } while (input != number);

    cout << "Conguratulations. You've found the number." << endl;
    return 0;    
}