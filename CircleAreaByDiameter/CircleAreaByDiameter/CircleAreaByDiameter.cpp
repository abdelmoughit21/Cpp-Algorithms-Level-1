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

float CircleAreaByDiameter(float D) {

    const float PI = 3.14;

    float Area = (PI * pow(D, 2)) / 4;

    return Area;

}

void PrintResult(float CircleArea) {

    cout << "Circle Area By Diameter : " << CircleArea << endl;

}

int main()
{

    float D;

    D = ReadPositiveNumber("Enter the Diameter : ");

    PrintResult(CircleAreaByDiameter(D));

    return 0;
}

