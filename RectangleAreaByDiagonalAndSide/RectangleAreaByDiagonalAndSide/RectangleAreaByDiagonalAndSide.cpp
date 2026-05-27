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

float RectangleAreaByDiagonalAndSide(float a, float d) {

    float Area = a * sqrt(pow(d, 2) - pow(a, 2));

    return Area;

}

void PrintResult(float RectangleArea) {

    cout << "Rectangle Area By Diagonal And Side : " << RectangleArea << endl;

}

int main()
{

    float a, d;

    a = ReadPositiveNumber("Enter a : ");
    d = ReadPositiveNumber("Enter d : ");

    PrintResult(RectangleAreaByDiagonalAndSide(a, d));

    return 0;
}

