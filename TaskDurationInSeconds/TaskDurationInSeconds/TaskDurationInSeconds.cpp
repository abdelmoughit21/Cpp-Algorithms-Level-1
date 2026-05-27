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

stTaskDuration ReadTaskDuration() {

    stTaskDuration TaskDuration;

    TaskDuration.days = ReadPositiveNumber("\nEnter how many Days : ");
    TaskDuration.hours = ReadPositiveNumber("\nEnter how many Hours : ");
    TaskDuration.minutes = ReadPositiveNumber("\nEnter how many Minutes : ");
    TaskDuration.seconds = ReadPositiveNumber("\nEnter how many Seconds : ");

    return TaskDuration;

}

float MinutesToSeconds(float minutes) {

    return minutes * 60;

}

float HoursToSeconds(float Hours) {

    return Hours * 60 * 60;

}

float DaysToSeconds(float Days) {

    return Days * 24 * 60 * 60;

}

int CalculateTaskDurationInSeconds(stTaskDuration TaskDuration) {

    int DurationInSeconds;

    DurationInSeconds = DaysToSeconds(TaskDuration.days) + HoursToSeconds(TaskDuration.hours)
              + MinutesToSeconds(TaskDuration.minutes) + TaskDuration.seconds;

    return DurationInSeconds;

}

int main()
{

    cout << "\nTask Duration in seconds is " << CalculateTaskDurationInSeconds(ReadTaskDuration()) << endl;

    return 0;
}
