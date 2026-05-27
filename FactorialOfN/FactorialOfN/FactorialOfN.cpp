#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message << endl;
        cin >> num;

    } while (num <= 0);

    return num;

}

int FactoriaOfNUsingForLoop(int n) {

    int Fact = 1;

    for (int i = 1; i <= n; i++)
        Fact *= i;

    return Fact;

}

int FactoriaOfNUsingWhileLoop(int n) {

    int Fact = 1;

    int i = 1;

    while (i <= n) {

        Fact *= i;

        i++;

    }

    return Fact;

}

int FactoriaOfNUsingDoWhileLoop(int n) {

    int Fact = 1;

    int i = 1;

    do {

        Fact *= i;

        i++;

    } while (i <= n);

    return Fact;

}

int main()
{

    int Num = ReadPositiveNumber("Enter your number : ");

    cout << "Factorial of " << to_string(Num) << " Using For Loop is " << FactoriaOfNUsingForLoop(Num) << endl;
    cout << "Factorial of " << to_string(Num) << " Using While Loop is " << FactoriaOfNUsingWhileLoop(Num) << endl;
    cout << "Factorial of " << to_string(Num) << " Using Do While Loop is " << FactoriaOfNUsingDoWhileLoop(Num);

    return 0;
}


