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

void PrintNumbersFromNTo1UsingForLoop(int n) {

    cout << endl;

    for (int i = n; i > 0; i--)
        cout << i << endl;

}

void PrintNumbersFromNTo1UsingWhile(int n) {

    cout << endl;

    int i = n;

    while (i > 0) {

        cout << i << endl;

        i--;

    }

}

void PrintNumbersFromNTo1UsingDoWhile(int n) {

    cout << endl;

    int i = n;

    do {

        cout << i << endl;
        i--;

    } while (i > 0);

}

int main()
{

    int Num = ReadPositiveNumber("Enter your number : ");

    PrintNumbersFromNTo1UsingForLoop(Num);
    PrintNumbersFromNTo1UsingWhile(Num);
    PrintNumbersFromNTo1UsingDoWhile(Num);

    return 0;
}


