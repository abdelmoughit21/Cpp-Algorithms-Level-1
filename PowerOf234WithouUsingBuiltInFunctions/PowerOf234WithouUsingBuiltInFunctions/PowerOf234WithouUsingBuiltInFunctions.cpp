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

void PowerOf2_3_4(int num) {

    int a, b, c;

    a = num * num;
    b = num * num * num;
    c = num * num * num * num;

    cout << "num ^ 2 = " << a << endl;
    cout << "num ^ 3 = " << b << endl;
    cout << "num ^ 4 = " << c << endl;

}

int main()
{

    int Num = ReadPositiveNumber("Enter your number : ");

    PowerOf2_3_4(Num);

    return 0;
}


