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

float CircleAreaDescribedAroundAnArbitraryTriangle(float a, float b ,float c) {

    const float PI = 3.14;

    float p = (a + b + c) / 2;

    float T = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));

    float Area = PI * pow(T, 2);

    return Area;

}

void PrintResult(float CircleArea) {

    cout << "Circle Area Described Around An Arbitrary Triangle : " << CircleArea << endl;

}

int main()
{

    float a, b , c;

    a = ReadPositiveNumber("Enter a : ");
    b = ReadPositiveNumber("Enter b : ");
    c = ReadPositiveNumber("Enter b : ");

    PrintResult(CircleAreaDescribedAroundAnArbitraryTriangle(a, b, c));

    return 0;
}

