#include <iostream>
#include <string>
using namespace std;

enum enOddEven { Odd = 1, Even = 2 };

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message << endl;
        cin >> num;

    } while (num <= 0);

    return num;

}

enOddEven IsOddOrEven(int num) {

    return (num % 2 != 0) ? enOddEven::Odd : enOddEven::Even;

}

int SumOddNumbersFrom1ToNUsingForLoop(int n) {

    int sum = 0;

    for (int i = 1; i <= n; i++)
        if (IsOddOrEven(i) == enOddEven::Odd)
            sum += i;

    return sum;

}

int SumOddNumbersFrom1ToNUsingWhileLoop(int n) {

    int sum = 0;

    int i = 1;

    while (i <= n) {

        if (IsOddOrEven(i) == enOddEven::Odd)
            sum += i;

        i++;

    }

    return sum;

}

int SumOddNumbersFrom1ToNUsingDoWhileLoop(int n) {

    int sum = 0;

    int i = 1;

    do {

        if (IsOddOrEven(i) == enOddEven::Odd)
            sum += i;

        i++;

    } while (i <= n);

    return sum;

}

int main()
{

    int Num = ReadPositiveNumber("Enter your number : ");

    cout << "Sum of Odd Numbers from 1 to " << to_string(Num) << " Using For Loop is " << SumOddNumbersFrom1ToNUsingForLoop(Num) << endl;
    cout << "Sum of Odd Numbers from 1 to " << to_string(Num) << " Using While Loop is " << SumOddNumbersFrom1ToNUsingWhileLoop(Num) << endl;
    cout << "Sum of Odd Numbers from 1 to " << to_string(Num) << " Using Do While Loop is " << SumOddNumbersFrom1ToNUsingDoWhileLoop(Num);

    return 0;
}


