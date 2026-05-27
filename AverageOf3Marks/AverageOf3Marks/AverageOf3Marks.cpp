#include <iostream>
using namespace std;

int ReadMark(string message) {

    int mark = 0;

    do {

        cout << message;
        cin >> mark;

    } while (mark < 0 || mark > 100);

    return mark;

}

int SumOf3Numbers(int num1, int num2, int num3) {

    return num1 + num2 + num3;

}

float AverageOf3Numbers(int num1, int num2, int num3) {

    return (float)SumOf3Numbers(num1, num2, num3) / 3;

}

void PrintResult(int Total) {

    cout << Total << endl;

}

int main()
{

    int mark1, mark2, mark3;

    mark1 = ReadMark("Enter first mark : ");
    mark2 = ReadMark("Enter second mark : ");
    mark3 = ReadMark("Enter three mark : ");

    PrintResult(AverageOf3Numbers(mark1, mark2, mark3));

    return 0;
}
