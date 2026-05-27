#include <iostream>
using namespace std;

int ReadNumber(string message) {

    int num = 0;

    cout << message;
    cin >> num;

    return num;

}

int MaxOfTwoNumbers(int num1, int num2) {

    return num1 > num2 ? num1 : num2;

}

void PrintResult(int max) {

    cout << "\nThe max is " << max << endl;

}

int main()
{

    int num1, num2;

    num1 = ReadNumber("Enter the first number : ");
    num2 = ReadNumber("Enter the second number : ");

    PrintResult(MaxOfTwoNumbers(num1, num2));

    return 0;
}
