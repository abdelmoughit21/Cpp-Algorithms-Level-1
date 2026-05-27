#include <iostream>
using namespace std;

enum enOpType { Add = 1 , Sub = 2 , Mult = 3 , Div = 4 };

struct stInfo {

    int num1 = 0, num2 = 0;
    enOpType OpType;

};

int ReadNumber(string message) {

    int num = 0;

    cout << message;
    cin >> num;

    return num;

}

enOpType ReadOpType(string message) {

    short OpType = 0;

    do {

        cout << message;
        cin >> OpType;

    } while (OpType < 1 || OpType > 4);

    return (enOpType)OpType;

}

stInfo ReadstInfo() {

    stInfo Info;

    cout << "Enter your first number : ";
    cin >> Info.num1;

    cout << "\nEnter your second number : ";
    cin >> Info.num2;

    Info.OpType = ReadOpType("Enter your operation type : (ADD : 1) , (SUB : 2) , (MULT : 3) , (DIV : 4) : ");

    return Info;

}

char GetOperationChar(enOpType OpType) {

    switch (OpType) {

    case enOpType::Add:
        return '+';
    case enOpType::Sub:
        return '-';
    case enOpType::Mult:
        return '*';
    case enOpType::Div:
        return '/';

    }

}

float SimpleCalculator(stInfo Info) {

    switch (Info.OpType) {

    case enOpType::Add:
        return float(Info.num1 + Info.num2);
    case enOpType::Sub:
        return float(Info.num1 - Info.num2);
    case enOpType::Mult:
        return float(Info.num1 * Info.num2);
    case enOpType::Div:
        return float(Info.num1 / Info.num2);

    }

}

int main()
{

    stInfo Info;

    Info = ReadstInfo();

    cout << "\nThe result is " << SimpleCalculator(Info) << endl;


    return 0;
}
