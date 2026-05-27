#include <iostream>
#include <string>
using namespace std;

string ReadFullName(string message) {

    string name = "";

    cout << message;
    getline(cin, name);

    return name;

}

int main()
{

    cout << ReadFullName("Enter your name : ") << endl;


    return 0;
}
