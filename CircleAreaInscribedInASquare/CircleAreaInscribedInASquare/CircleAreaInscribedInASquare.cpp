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

float CircleAreaInscribedInASquare(float A) {

    const float PI = 3.14;

    float Area = (PI * pow(A, 2)) / 4;

    return Area;

}

void PrintResult(float CircleArea) {

    cout << "Circle Area Inscribed In A Square : " << CircleArea << endl;

}

int main()
{

    float A;

    A = ReadPositiveNumber("Enter A : ");

    PrintResult(CircleAreaInscribedInASquare(A));

    return 0;
}

