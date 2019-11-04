// google-cpp-gs-ex5.cpp: Eren Pinaz
// Description: Google cpp Exercise#5

#include <iostream>
using namespace std;

int reverseNumber(int number)
{
    int reversed = 0;
    while (number > 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

bool checkLength(int number)
{
    int length = 0;
    while (number > 0)
    {
        ++length;
        number /= 10;
    }
    return length <= 3;
}

bool checkDigits(int number)
{
    int digit1 = number % 10;
    int digit3 = (number / 100) % 10;

    return digit1 < digit3;
}

int main(int argc, char const *argv[])
{
    int number, subtraction, result;
    cout << "Enter three-digit number (first digit > last digit): ";
    cin >> number;

    if (checkLength(number) && checkDigits(number))
    {
        subtraction = number - reverseNumber(number);
        result = reverseNumber(subtraction) + subtraction;
        cout << result << endl;
    }
    else
    {
        cout << "Unacceptable number." << endl;
    }

    return 0;
}