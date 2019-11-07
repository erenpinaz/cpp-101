// google-cpp-gs-ex6.cpp: Eren Pinaz
// Description: Google cpp Exercise#6

#include <iostream>
using namespace std;

const string kAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string kMonths[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int CharIndex(char c) {
    return kAlphabet.find(c);
}

int DecodeYear(char c) {
    return CharIndex(c) + 1996;
}

string DecodeMonth(char c)
{
    size_t index = CharIndex(c);
    return kMonths[index];
}

int DecodeDay(char c)
{
    return CharIndex(c) - CharIndex('Q');
}

int main(int argc, char const *argv[])
{
    string input = "ARZM";
    cout << DecodeMonth(input[0]);
    for (size_t i = 1; i < input.length() - 1; i++)
    {
        cout << DecodeDay(input[i]);
    }
    cout << DecodeYear(input[input.length() - 1]);
    
    return 0;
}