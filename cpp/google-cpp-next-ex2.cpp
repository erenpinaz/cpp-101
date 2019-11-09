// google-cpp-next-ex2.cpp: Eren Pinaz
// Description: Google cpp next steps Example#2

#include <iostream>
using namespace std;

void DoIt(int &foo, int goo) {
    foo = goo + 3;
    goo = foo + 4;
    foo = goo + 3;
    goo = foo;
}

int main(int argc, char const *argv[])
{
    int *foo, *goo;
    foo = new int;
    *foo = 1;

    goo = new int;
    *goo = 3;

    *foo = *goo + 3;            // foo = 4
    foo = goo;                  // foo = 3

    *goo = 5;                   // foo = 5
    *foo = *goo + *foo;         // foo = 10

    DoIt(*foo, *goo);           // foo = 10, goo = 10
    cout << (*foo) << endl;     // foo = 20

    return 0;
}