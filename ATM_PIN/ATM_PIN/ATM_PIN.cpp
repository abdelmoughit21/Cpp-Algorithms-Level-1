#include <iostream>
#include <string>
using namespace std;

string ReadString(string message) {

    string text = "";

    cout << message;
    getline(cin, text);

    return text;

}

bool CheckATM_PIN() {

    string PIN = "";
    int Counter = 0;

    do {

        if (Counter > 0)
            cout << "Wrong PIN, ";

        PIN = ReadString("Enter your PIN Code : ");

        if (PIN == "1234")
            return true;

        Counter++;
    } while (true);

}

int main()
{

    if (CheckATM_PIN())
        cout << "Your Balance is " << 7500 << endl;



    return 0;
}
