#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

float CalculateHalfNumber(int num) {

    return (float)num / 2;

}

void PrintResult(int num) {

    string Result = "Half of " + to_string(num) + " is " + to_string(CalculateHalfNumber(num));

    cout << Result << endl;

}

int main()
{

    PrintResult(ReadPositiveNumber("Enter a positive number : "));

    return 0;
}

