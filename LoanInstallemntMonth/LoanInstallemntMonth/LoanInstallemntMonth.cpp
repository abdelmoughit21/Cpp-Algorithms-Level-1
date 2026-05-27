#include <iostream>
using namespace std;

struct stInfo {

    float LoanAmount, MonthlyPayment;

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
    Info.MonthlyPayment = ReadPositiveNumber("Enter how much money you will pay per month : ");

    return Info;

}

float CalculateMonthsToSettleLoan(stInfo Info) {

    return (float)Info.LoanAmount / Info.MonthlyPayment;

}

int main()
{

    cout <<  CalculateMonthsToSettleLoan(ReadInfo()) << " months.";



    return 0;
}

