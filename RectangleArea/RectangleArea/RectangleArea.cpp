#include <iostream>
using namespace std;

float ReadPositiveNumber(string message) {

    float num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

float RectangleArea(float a, float b) {

    return a * b;

}

void PrintResult(float RectangleArea) {

    cout << "Rectangle Area is " << RectangleArea << endl;

}

int main()
{

    float a, b;

    a = ReadPositiveNumber("Enter a : ");
    b = ReadPositiveNumber("Enter b : ");

    PrintResult(RectangleArea(a, b));

    return 0;
}

