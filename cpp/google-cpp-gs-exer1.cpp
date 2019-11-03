// google-cpp-gs-ex1.cpp: Eren Pinaz
// Description: Google cpp Exercise#1

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double input_chirps;
    cout << "Enter number of chirps: "; cin >> input_chirps;
    cout << "The temperature is: " << (double)((input_chirps + 40) / 4) << " degrees" << endl;

    return 0;
}