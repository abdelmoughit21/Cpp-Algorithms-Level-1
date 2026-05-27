#include <iostream>
using namespace std;

int ReadNumber(string message) {

    int num = 0;

    cout << message;
    cin >> num;

    return num;

}

int MaxOfThreeNumbers(int num1, int num2 , int num3) {

    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;
    else
        if (num2 > num3)
            return num2;
        else
            return num3;

}

void PrintResult(int max) {

    cout << "\nThe max is " << max << endl;

}

int main()
{

    int num1, num2, num3;

    num1 = ReadNumber("Enter the first number : ");
    num2 = ReadNumber("Enter the second number : ");
    num3 = ReadNumber("Enter the third number : ");

    PrintResult(MaxOfThreeNumbers(num1, num2, num3));

    return 0;
}
