#include <iostream>
using namespace std;

enum enMonthOfYear { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, Septemeber = 9, October = 10, November = 11 , December = 12 };

enMonthOfYear ReadMonthOfYear(string message) {

    short int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num < 1 || num > 12);

    return (enMonthOfYear)num;

}

string GetYourMonthOfYear(enMonthOfYear MonthOfYear) {

    switch (MonthOfYear) {

    case enMonthOfYear::January:
        return "January";
    case enMonthOfYear::February:
        return "February";
    case enMonthOfYear::March:
        return "March";
    case enMonthOfYear::April:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::June:
        return "June";
    case enMonthOfYear::July:
        return "July";
    case enMonthOfYear::August:
        return "August";
    case enMonthOfYear::Septemeber:
        return "Septemeber";
    case enMonthOfYear::October:
        return "October";
    case enMonthOfYear::November:
        return "November";
    case enMonthOfYear::December:
        return "December";
    default:
        return "Wrong Month";

    }

}

int main()
{

    cout << "It's " << GetYourMonthOfYear(ReadMonthOfYear("Enter your day  : January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, Septemeber = 9, October = 10, November = 11 , December = 12 : "));

    return 0;
}
