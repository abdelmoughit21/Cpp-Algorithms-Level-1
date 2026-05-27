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

bool ValidateNumberInRange(int Number , int from , int to) {

    return (Number >= from && Number <= to);

}

void PrintResult(short age) {

    ValidateNumberInRange(age, 18, 45) ? cout << "Valid Age" : cout << "Invalid Age" << endl;

}

int main()
{

    short age;

    age = ReadPositiveNumber("Enter your age : ");

    PrintResult(age);

    return 0;
}


