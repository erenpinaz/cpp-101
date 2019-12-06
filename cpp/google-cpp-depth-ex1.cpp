// google-cpp-depth-ex1.cpp: Eren Pinaz
// Description: Google cpp in depth Example#1

#include <iostream>
#include <math.h>
#include <optional>

using namespace std;

void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int *num);

void Unknown(int *p, int num) {
  int *q;

  q = &num; 	// q = 1
  *p = *q + 2;	// p = 5
  num = 7;		// q = 7, num = 7
}

void HardToFollow(int *p, int q, int *num) {
  *p = q + *num; 	// p = 4
  *num = q;			// num = 1, trouble[2] = 1
  num = p;			// num = 4
  p = &q;			// p = 1
  Unknown(num, *p);	// 4, 1
}

main() {
  int *q;
  int trouble[3];

  trouble[0] = 1; 	// trouble[0] = 1
  q = &trouble[1];
  *q = 2;			// q = 2, trouble[1] = 2
  trouble[2] = 3;	// trouble[2] = 3

  HardToFollow(q, trouble[0], &trouble[2]); // 2, 1, 3
  Unknown(&trouble[0], *q);					// 1, 3

  cout << *q << " " << trouble[0] << " " << trouble[2]; // 3 5 1
}