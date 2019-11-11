// google-cpp-next-exer1.cpp: Eren Pinaz
// Description: Google cpp next steps Exercise#1

#include <iostream>
#include <math.h>
using namespace std;

bool IsPerfectSquare(int n) {
	long double sr = sqrt(n);
	return (sr - floor(sr)) == 0;
}

void FindPerfectSqSum() {
    long i = 9, sum = 0;
    while (true) {
        for (size_t j = 0; j <= i; j++)
		{
			sum += j;
		}
		if (i > 1 && IsPerfectSquare(sum))
		{
			cout << "n is: " << i << ", Sum = " << sum << endl;
			break;
		}
		i++; sum = 0;
    }
}

int main(int argc, char const *argv[]) {
	FindPerfectSqSum();
	return 0; 
}