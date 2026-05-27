#include <iostream>
using namespace std;

struct stInfo {

    float TotalBill = 0, CashPaid = 0;

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

    Info.TotalBill = ReadPositiveNumber("Enter Total Bill : ");
    Info.CashPaid = ReadPositiveNumber("Enter Cash Paid : ");

    return Info;

}

float CalculateRemainder(stInfo Info) {

    return Info.CashPaid - Info.TotalBill;

}

int main()
{

    stInfo Info;

    Info = ReadInfo();

    cout << "\nRemainder is " << CalculateRemainder(Info) << endl;



    return 0;
}
