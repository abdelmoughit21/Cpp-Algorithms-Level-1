#include <iostream>
using namespace std;

int ReadNumber(string message) {

    int num = 0;

    cout << message;
    cin >> num;

    return num;

}

int SumOf3Numbers(int num1, int num2, int num3) {

    return (num1 + num2 + num3);

}

void PrintResult(int Total) {

    cout << Total << endl;

}

int main()
{
    int num1, num2, num3;

    num1 = ReadNumber("Enter first number 1 : ");
    num2 = ReadNumber("Enter first number 2 : ");
    num3 = ReadNumber("Enter first number 3 : ");

    PrintResult(SumOf3Numbers(num1, num2, num3));

    return 0;
}
