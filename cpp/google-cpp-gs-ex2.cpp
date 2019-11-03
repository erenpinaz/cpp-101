// google-cpp-gs-ex2.cpp: Eren Pinaz
// Description: a program that prints the given input

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int input_var = 0;

    do {
        cout << "Enter a number (-1 = Quit): ";
        if (!(cin >> input_var))
        {
            cout << "You entered a non-numeric. Exiting..." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        if (input_var != -1)
        {
            cout << "You entered " << input_var << endl;
        }
    }
    while (input_var != -1);
    

    cout << "All done!" << endl;
    return 0;
}