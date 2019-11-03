// google-cpp-gs-ex2.cpp: Eren Pinaz
// Description: Google cpp Exercise#2

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double assg1, assg2, assg3, assg4, midterm, final, section;

    cout << "Enter the score for the first assignment."; cin >> assg1;
    cout << "Enter the score for the second assignment."; cin >> assg2;
    cout << "Enter the score for the third assignment."; cin >> assg3;
    cout << "Enter the score for the fourth assignment."; cin >> assg4;
    cout << "Enter the score for the midterm."; cin >> midterm;
    cout << "Enter the score for the final."; cin >> final;
    cout << "Enter the score for the section grade."; cin >> section;

    cout << "The final grade is:" << ((assg1 + assg2 + assg3 + assg4) * (0.40 / 4)) + (midterm * 0.15) + (final * 0.35) + (section * 0.10) << endl;

    return 0;
}