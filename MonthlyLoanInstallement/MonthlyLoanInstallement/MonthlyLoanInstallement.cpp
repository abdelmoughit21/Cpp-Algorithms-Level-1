#include <iostream>
using namespace std;

struct stInfo {

    float LoanAmount, MonthsToSettleTheLoan;

};

float ReadPositiveNumber(string message) {

    float num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

stInfo ReadInfo() {

    stInfo Info;

    Info.LoanAmount = ReadPositiveNumber("Enter the loan amount : ");
    Info.MonthsToSettleTheLoan = ReadPositiveNumber("Enter how many months you need to settle the loan : ");

    return Info;

}

float CalculateMonthlyInstallementAmount(stInfo Info) {

    return (float)Info.LoanAmount / Info.MonthsToSettleTheLoan;

}

int main()
{

    cout << CalculateMonthlyInstallementAmount(ReadInfo()) << " dollars.";

    return 0;
}

