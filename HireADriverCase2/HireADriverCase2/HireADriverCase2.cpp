#include <iostream>
using namespace std;

struct stInfo {

    short age;
    bool isHavingDriverLicense = false;
    bool HasRecommandation = false;

};

short ReadAge(string message) {

    short age = 0;

    do {

        cout << message;
        cin >> age;

    } while (age < 0 || age > 100);

    return age;

}

stInfo ReadInfo() {

    stInfo Info;

    Info.age = ReadAge("Enter your age : ");

    cout << "Do you have driver license ? YES : 1 , No : 0 ? ";
    cin >> Info.isHavingDriverLicense;

    cout << "Do you have Recommandation ? YES : 1 , No : 0 ? ";
    cin >> Info.HasRecommandation;

    return Info;

}

bool IsAccepted(stInfo Info) {

    if (Info.HasRecommandation)
        return true;
    else
        return (Info.age > 21 && Info.isHavingDriverLicense);

}

void PrintResult(stInfo Info) {

    if (IsAccepted(Info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;

}

int main()
{

    PrintResult(ReadInfo());


    return 0;
}
