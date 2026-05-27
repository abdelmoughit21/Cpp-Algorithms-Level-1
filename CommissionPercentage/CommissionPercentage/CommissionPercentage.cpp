#include <iostream>
using namespace std;

float ReadPositiveNumber(string message) {

    float num = 0;

    do {

        cout << message << endl;
        cin >> num;

    } while (num <= 0);

    return num;

}

float GetCommissionPercentage(float TotalSales) {

    if (TotalSales > 1000000)
        return 0.01;
    else if (TotalSales > 500000)
        return 0.02;
    else if (TotalSales > 100000)
        return 0.03;
    else if (TotalSales > 50000)
        return 0.05;
    else
        return 0;

}

float CalculateTotalCommission(float TotalSales) {

    return TotalSales * GetCommissionPercentage(TotalSales);

}

int main()
{

    cout << "\nYour commission is " << CalculateTotalCommission(ReadPositiveNumber("Enter the Total Sales : ")) << endl;

    return 0;
}