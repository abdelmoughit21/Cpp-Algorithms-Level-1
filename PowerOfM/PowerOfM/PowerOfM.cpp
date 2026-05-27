#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message << endl;
        cin >> num;

    } while (num <= 0);

    return num;

}

int PowerOfM(int M , int num) {

    int p = 1;

    if (M == 0)
        return 1;

    for (int i = 1; i <= M; i++) {

        p *= num;

    }

    return p;

}

int main()
{

    cout << "\nResult is " << PowerOfM(ReadPositiveNumber("Enter a Power : "), ReadPositiveNumber("Enter your number : "));

    return 0;
}


