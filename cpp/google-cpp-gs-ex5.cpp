// google-cpp-gs-ex5.cpp: Eren Pinaz
// Description: brute force combination solver

#include <iostream>
using namespace std;

void bf_farmer_inventory(int p_horse, int p_pig, double p_rabbit, int p_total, int c_total) {
    // Horses cost {p_horse}, pigs cost {p_pigs}, and rabbits are only {p_rabbits}. A farmer buys {c_total} animals for {p_total}. 
    // How many of each animal did he buy?
    for (size_t i = 0; i < c_total; i++)
    {
        for (size_t j = 0; j < c_total; j++)
        {
            for (size_t t = 0; t < c_total; t++)
            {
                if (((p_horse * i) + (p_pig * j) + (p_rabbit * t)) == 100)
                {
                    cout << "Farmer can buy " << i << " horses, " << j << " pigs, " << t << " rabbits." << endl;
                    break;
                }
            }
        }
    }
}

void bf_book_arrangement(int c_books) {
    // How man ways {c_books} books can be arranged on a shelf?
    // Factorial can be used to solve this problem
    int result = 1;
    for (size_t i = c_books; i >= 1; i--)
    {
        result = result * i;   
    }

    cout << c_books << " books can be arranged " << result << " ways in a shelf.";
}

int main(int argc, char const *argv[])
{
    bf_farmer_inventory(10, 3, 0.5, 100, 100);
    bf_book_arrangement(6);
    
    return 0;
}