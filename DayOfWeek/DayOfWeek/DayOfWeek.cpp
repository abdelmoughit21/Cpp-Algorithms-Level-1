#include <iostream>
using namespace std;

enum enDaysOfWeek { Sunday = 1 , Monday = 2 , Tuesday = 3 , Wednesday = 4 , Thursday = 5 , Friday = 6 , Saturday = 7 };

enDaysOfWeek ReadDayOfWeek(string message) {

    short int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num < 1 || num > 7);

    return (enDaysOfWeek)num;

}

string GetYourDayOfWeek(enDaysOfWeek DayOfWeek) {

    switch (DayOfWeek) {

    case enDaysOfWeek::Sunday:
        return "Sunday";
    case enDaysOfWeek::Monday:
        return "Monday";
    case enDaysOfWeek::Thursday:
        return "Thursday";
    case enDaysOfWeek::Wednesday:
        return "Wednesday";
    case enDaysOfWeek::Tuesday:
        return "Tuesday";
    case enDaysOfWeek::Friday:
        return "Friday";
    case enDaysOfWeek::Saturday:
        return "Saturday";
    default:
        return "Sunday";

    }

}

int main()
{

    cout << "It's " << GetYourDayOfWeek(ReadDayOfWeek("Enter your day  : Sunday = 1 , Monday = 2 , Tuesday = 3 , Wednesday = 4 , Thursday = 5 , Friday = 6 , Saturday = 7 : "));

    return 0;
}
