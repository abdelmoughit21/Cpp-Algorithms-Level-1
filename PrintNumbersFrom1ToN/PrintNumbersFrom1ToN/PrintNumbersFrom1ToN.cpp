#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message << endl;
        cin >> num;

    } while (num <= 0);

    return num;

}

void PrintNumbersFrom1ToNUsingForLoop(int n) {

    cout << endl;

    for (int i = 1; i <= n; i++)
        cout << i << endl;

}

void PrintNumbersFrom1ToNUsingWhile(int n) {

    cout << endl;

    int i = 1;

    while (i <= n) {

        cout << i << endl;

        i++;

    }

}

void PrintNumbersFrom1ToNUsingDoWhile(int n) {

    cout << endl;

    int i = 1;

    do {

        cout << i << endl;
        i++;

    } while (i <= n);

}

int main()
{

    int Num = ReadPositiveNumber("Enter your number : ");

    PrintNumbersFrom1ToNUsingForLoop(Num);
    PrintNumbersFrom1ToNUsingWhile(Num);
    PrintNumbersFrom1ToNUsingDoWhile(Num);

    return 0;
}


