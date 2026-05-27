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

float TriangleArea(float a, float h) {

    float Area = (a * h) / 2;

    return Area;

}

void PrintResult(float TriangleArea) {

    cout << "Triangle Area : " << TriangleArea << endl;

}

int main()
{

    float a, h;

    a = ReadPositiveNumber("Enter a : ");
    h = ReadPositiveNumber("Enter h : ");

    PrintResult(TriangleArea(a, h));

    return 0;
}

