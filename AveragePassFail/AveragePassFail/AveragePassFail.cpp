#include <iostream>
using namespace std;

enum enMark { Pass = 1, Fail = 2 };

int ReadMark(string message) {

    int mark = 0;

    do {

        cout << message;
        cin >> mark;

    } while (mark < 0 || mark > 100);

    return mark;

}

enMark IsPass(int mark) {

    return mark >= 50 ? enMark::Pass : enMark::Fail;

}

int SumOf3Numbers(int num1, int num2, int num3) {

    return num1 + num2 + num3;

}

float AverageOf3Numbers(int num1, int num2, int num3) {

    return (float)SumOf3Numbers(num1, num2, num3) / 3;

}

void PrintResult(int Average) {

    IsPass(Average) == enMark::Pass ? cout << "Pass" : cout << "Fail" << endl;

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
