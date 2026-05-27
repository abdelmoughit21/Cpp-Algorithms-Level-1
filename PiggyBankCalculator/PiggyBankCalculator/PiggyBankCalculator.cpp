#include <iostream>
using namespace std;

struct stPiggyBank {

    short Penny = 0 , Nickel = 0 , Dime = 0 , Quarter = 0 , Dollar = 0;

};

stPiggyBank ReadstPiggyBank() {

    stPiggyBank stBank;

    cout << "\Enter how many pennies do you have : ";
    cin >> stBank.Penny;

    cout << "\nEnter how many Nickels do you have : ";
    cin >> stBank.Nickel;

    cout << "\nEnter how many Dimes do you have : ";
    cin >> stBank.Dime;

    cout << "\nEnter how many Quarter do you have : ";
    cin >> stBank.Quarter;

    cout << "\nEnter how many Dollar do you have : ";
    cin >> stBank.Dollar;

    return stBank;

}

float CalculateTheTotalPennies(stPiggyBank stBank) {

    float TotalPennies = 0;

    TotalPennies = stBank.Penny + stBank.Nickel * 5 + stBank.Dime * 10 + stBank.Quarter * 25 + stBank.Dollar * 100;

    return TotalPennies;

}

float CalculateTheTotalDollars(float TotalPennies) {

    return TotalPennies / 100;

}

int main()
{
    float TotalPennies = CalculateTheTotalPennies(ReadstPiggyBank());
    cout << TotalPennies << " Pennies." << endl;
    cout << CalculateTheTotalDollars(TotalPennies) << " Dollars." << endl;

    return 0;
}