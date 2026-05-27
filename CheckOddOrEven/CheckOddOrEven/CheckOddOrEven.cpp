#include <iostream>
using namespace std;

enum enOddEven { Odd = 1 , Even = 2};

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

enOddEven IsOddOrEven(int num) {

    return (num % 2 != 0) ? enOddEven::Odd : enOddEven::Even;

}

void PrintResult(int num) {

    if (IsOddOrEven(num) == enOddEven::Odd)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;

}


int main()
{

    PrintResult(ReadPositiveNumber("Enter your number : "));


    return 0;
}
