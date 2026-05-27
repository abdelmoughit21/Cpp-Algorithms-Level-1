#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message << endl;
        cin >> num;

    } while (num <= 0);

    return num;

}

bool ValidateNumberInRange(int Number, int from, int to) {

    return (Number >= from && Number <= to);

}

int ReadUntilNumberInRange(int from, int to) {

    int num = 0;

    do {

        num = ReadPositiveNumber("Enter you grade : ");

    } while (!ValidateNumberInRange(num, from, to));

    return num;

}

char GetGradeLetter(int Grade) {

    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';

}

int main()
{

    cout << "\nResult is " << GetGradeLetter(ReadUntilNumberInRange(0, 100)) << endl;


    return 0;
}

