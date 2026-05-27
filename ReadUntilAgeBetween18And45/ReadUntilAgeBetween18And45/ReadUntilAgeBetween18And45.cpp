#include <iostream>
using namespace std;

short ReadPositiveNumber(string message) {

    short num = 0;

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

        num = ReadPositiveNumber("Enter you age : ");

    } while (!ValidateNumberInRange(num, from, to));

    return num;

}

void PrintResult(short age) {

    cout << "\nYour age is " << age << endl;

}

int main()
{

    PrintResult(ReadUntilNumberInRange(18, 45));

    return 0;
}


