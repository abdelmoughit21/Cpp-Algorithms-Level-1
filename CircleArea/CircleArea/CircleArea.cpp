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

float CircleArea(float r) {

    const float PI = 3.14;

    float Area = PI * pow(r, 2);

    return Area;

}

void PrintResult(float CircleArea) {

    cout << "Circle Area : " << CircleArea << endl;

}

int main()
{

    float r;

    r = ReadPositiveNumber("Enter r : ");

    PrintResult(CircleArea(r));

    return 0;
}

