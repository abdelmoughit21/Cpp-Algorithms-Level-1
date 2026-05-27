#include <iostream>
using namespace std;

enum enMark { Pass = 1 , Fail = 2 };

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

void PrintResult(int mark) {

    if (IsPass(mark) == enMark::Pass)
        cout << "Pass";
    else
        cout << "Fail";

}

int main()
{

    PrintResult(ReadMark("Enter your mark : "));

    return 0;
}
