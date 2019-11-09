// google-cpp-next-ex3.cpp: Eren Pinaz
// Description: Google cpp next steps Example#3

#include <iostream>
using namespace std;

void Accelerate(int &speed, int amount) {
    speed = speed + amount;
}

int main(int argc, char const *argv[])
{
    int speed, amount;
    speed = 0;

    cout << "Enter acceleration amount: "; cin >> amount;
    
    Accelerate(speed, amount);
    cout << (speed) << endl;

    return 0;
}