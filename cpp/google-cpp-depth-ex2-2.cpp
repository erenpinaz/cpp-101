// google-cpp-depth-ex2-2.cpp: Eren Pinaz
// Description: Google cpp in depth Example#2-2

#include <math.h>
#include <iostream>
#include <optional>

using namespace std;

int compute_arr(int* a, int cols, int row, int col) {

}

main() {
    int arr[2][3][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int t = 0; t < 3; t++)
            {
                arr[i][j][t] = i+j+t;
            }
        }
    }

    return 0;
}