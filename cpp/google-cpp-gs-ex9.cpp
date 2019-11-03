// google-cpp-gs-ex8.cpp: Eren Pinaz
// Description: file processing

#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    char first_name[30], last_name[30];
    char file_name[20];
    int age;

    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter output file name: ";
    cin >> file_name;

    ofstream People(file_name, ios::out);
    People << first_name << endl << last_name << endl << age << endl;

    return 0;
}