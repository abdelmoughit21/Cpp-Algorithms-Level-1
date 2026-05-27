#include <iostream>
using namespace std;

int ReadNumber(string message) {

    int num = 0;

    cout << message;
    cin >> num;

    return num;

}

int SumUntilMinus99() {

    int sum = 0 , num = 0;

    do {

        num = ReadNumber("Enter a number : ");
        
        if (num == -99)
            return sum;

        sum += num;

    } while (true);

}

int main()
{

    cout << "Sum until -99 is " << SumUntilMinus99() << endl;

    return 0;
}

