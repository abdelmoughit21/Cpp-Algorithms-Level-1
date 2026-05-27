#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

float HoursToDays(int Hours) {

    return float(Hours / 24);

}

float HoursToWeeks(int Hours) {

    return (float)HoursToDays(Hours) / 7;

}

int main()
{

    int NumberOfHours = ReadPositiveNumber("Enter number of hours : ");

    cout << "\nNumber of weeks is " << HoursToWeeks(NumberOfHours) << endl;
    cout << "\nNumber of days is " << HoursToDays(NumberOfHours) << endl;

    return 0;
}
