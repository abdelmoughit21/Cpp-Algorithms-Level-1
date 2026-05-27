#include <iostream>
using namespace std;

void ReadTwoNumbers(int& num1, int& num2) {

    cout << "Enter the first number : ";
    cin >> num1;

    cout << "\nEnter the second number : ";
    cin >> num2;

}

void Swap(int& num1, int& num2) {

    int temp = num1;
    num1 = num2;
    num2 = temp;

}

int main()
{

    int num1, num2;

    ReadTwoNumbers(num1, num2);

    cout << "\nNumbers before swap : " << endl;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    Swap(num1, num2);

    cout << "Numbers after swap : " << endl;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    


    return 0;
}


