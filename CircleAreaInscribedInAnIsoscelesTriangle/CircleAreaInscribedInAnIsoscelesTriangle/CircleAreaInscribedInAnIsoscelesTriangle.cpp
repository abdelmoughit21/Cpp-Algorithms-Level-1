#include <iostream>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string message) {

    float num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

float CircleAreaInscribedInAnIsoscelesTriangle(float a , float b) {

    const float PI = 3.14;

    float Left = (PI * pow(b, 2)) / 4;
    float Up = (2 * a) - b;
    float Down = (2 * a) + b;

    float Area = Left * (Up / Down);

    return Area;

}

void PrintResult(float CircleArea) {

    cout << "Circle Area Inscribed In An Isosceles Triangle : " << CircleArea << endl;

}

int main()
{

    float a, b;

    a = ReadPositiveNumber("Enter a : ");
    b = ReadPositiveNumber("Enter b : ");

    PrintResult(CircleAreaInscribedInAnIsoscelesTriangle(a , b));

    return 0;
}

