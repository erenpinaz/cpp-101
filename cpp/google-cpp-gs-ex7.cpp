// google-cpp-gs-ex7.cpp: Eren Pinaz
// Description: salary calculator based on sales

#include <iostream>
using namespace std;

#define kFixedSalary 600
#define kSalaryPerHour 7
#define kWeeklySaleCommission 0.1
#define kWeeklySaleCommissionNoSalary 0.2
#define kBonusPerProduct 20
#define kWorkHoursPerWeek 40
#define kPricePerProduct 225

int GetInput() {
    int input;
    cout << "Enter the number of shoes sold this week?: ";
    if (!(cin >> input)) {
        cout << "You've entered non-numeric." << endl;
        return 0;
    } else {
        return input;
    }
}

void CalcMethod1(int sales) { cout << "Method1: " << kFixedSalary << endl; }

void CalcMethod2(int sales) {
    double salary = kWorkHoursPerWeek * kSalaryPerHour +
                    (sales * kPricePerProduct * kWeeklySaleCommission);
    cout << "Method2: " << salary << endl;
}

void CalcMethod3(int sales) {
    double salary = (sales * kPricePerProduct * kWeeklySaleCommissionNoSalary) +
                    (sales * kBonusPerProduct);
    cout << "Method3: " << salary << endl;
}

int main(int argc, char const *argv[]) {
    int weekly_sales;

    weekly_sales = GetInput();
    CalcMethod1(weekly_sales);
    CalcMethod2(weekly_sales);
    CalcMethod3(weekly_sales);

    return 0;
}