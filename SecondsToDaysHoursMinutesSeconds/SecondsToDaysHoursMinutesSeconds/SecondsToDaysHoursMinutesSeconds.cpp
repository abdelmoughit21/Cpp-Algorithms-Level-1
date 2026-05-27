#include <iostream>
using namespace std;

struct stTaskDuration {

    int days, hours, minutes, seconds;

};

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

stTaskDuration SecondsToDaysHoursMinutsSeconds(int DurationInSeconds) {

    stTaskDuration TaskDuration;

    int SecondsToDays = 24 * 60 * 60;
    int SecondsToHours = 60 * 60;
    int SecondsToMinutes = 60;

    TaskDuration.days = floor(DurationInSeconds / SecondsToDays);

    int Remainder = DurationInSeconds % SecondsToDays;

    TaskDuration.hours = floor(Remainder / SecondsToHours);

    Remainder = Remainder % SecondsToHours;

    TaskDuration.minutes = floor(Remainder / SecondsToMinutes);

    Remainder = Remainder % SecondsToMinutes;

    TaskDuration.seconds = Remainder;

    return TaskDuration;

}

int main()
{

    stTaskDuration TaskDuration;

    TaskDuration = SecondsToDaysHoursMinutsSeconds(ReadPositiveNumber("Enter task duration in seconds : "));

    cout << endl << TaskDuration.days << ":" << TaskDuration.hours << ":" << TaskDuration.minutes << ":" << TaskDuration.seconds << endl;
    
    return 0;
}
