#include <iostream>
using namespace std;

float ReadPositiveNumber(string message) {

    float num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

float ServiceFee(float BillValue) {

    return (float)BillValue * 1.10;

}

float SalesTax(float BillValue) {

    return (float)BillValue * 1.16;

}

int main()
{

    float BillValue = ReadPositiveNumber("Enter the Bill Value : ");

    cout << "\The Total Bill is " << SalesTax(ServiceFee(BillValue)) << endl;


    return 0;
}
