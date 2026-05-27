#include <iostream>
using namespace std;

enum enPrime { Prime = 1 , NotPrime = 2 };

int ReadNumber(string message) {

    int num = 0;

    cout << message;
    cin >> num;

    return num;

}

enPrime IsPrime(int num) {

    for (int i = 2; i <= round(num / 2); i++)
        if (num % i == 0)
            return enPrime::NotPrime;

    return enPrime::Prime;

}

void PrintResult(int num) {

    IsPrime(num) == enPrime::Prime ? cout << "Prime" : cout << "Not Prime";

}

int main()
{

    PrintResult(ReadNumber("Enter your number : "));

    return 0;
}

