// google-cpp-gs-ex8.cpp: Eren Pinaz
// Description: scope illustration

#include <iostream>
using namespace std;

int a = 18;
int b = 6;

int Function1(int a, int b) {
    return a - b;
}

int Function2() {
    int c;
    c = a + b;
    return c;
}

int main(int argc, char const *argv[]) {
    int b = 12;
    int c = 0;

    a = Function1(b, a);
    c = Function2();

    cout << "a: " << a << " b: " << b << " c: " << c << endl;

    return 0;
}