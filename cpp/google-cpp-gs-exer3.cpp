// google-cpp-gs-ex3.cpp: Eren Pinaz
// Description: Google cpp Exercise#3

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int input_seconds, hours, minutes, seconds;

    cout << "Number of seconds: "; cin >> input_seconds;

    hours = floor(input_seconds / 3600);
    minutes = floor((input_seconds - (hours * 3600)) / 60);
    seconds = (input_seconds - (hours * 3600) - (minutes * 60));

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}