#include <iostream>
using namespace std;

struct stInfo {

    string FirstName = "";
    string LastName = "";

};

string ReadText(string message) {

    string text = "";

    cout << message;
    cin >> text;

    return text;

}

stInfo ReadInfo() {

    stInfo Info;

    Info.FirstName = ReadText("Enter your first name : ");
    Info.LastName = ReadText("Enter your last name : ");

    return Info;

}

string GetFullName(stInfo Info) {

    return Info.FirstName + " " + Info.LastName;

}

void PrintResult(string FullName) {

    cout << FullName << endl;

}

int main()
{

    PrintResult(GetFullName(ReadInfo()));

    return 0;
}
