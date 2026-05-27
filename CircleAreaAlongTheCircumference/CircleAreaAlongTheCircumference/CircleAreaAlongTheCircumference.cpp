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

float CircleAreaAlongTheCircumference(float L) {

    const float PI = 3.14;

    float Area = pow(L, 2) / (PI * 4);

    return Area;

}

void PrintResult(float CircleArea) {

    cout << "Circle Area Along The Circumference : " << CircleArea << endl;

}

int main()
{

    float L;

    L = ReadPositiveNumber("Enter L : ");

    PrintResult(CircleAreaAlongTheCircumference(L));

    return 0;
}

