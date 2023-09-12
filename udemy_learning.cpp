#include <iostream>
#include "account.h"

using namespace std;

int main()
{

    Account ahmed_account;
    ahmed_account.set_name("Ahmed");
    ahmed_account.set_balance(1000.0);

    cout << "The current user's name is: " << ahmed_account.get_name() << " and his current balance is: " << ahmed_account.get_balance() << endl;

    if (ahmed_account.deposit(500.0)) {
        cout << "In deposit\nThe new balance is: " << ahmed_account.get_balance() << endl; }
    
    else {
        cout << "Unable to deposit\nThe Current balance is: " << ahmed_account.get_balance() << endl;
    }

    if (ahmed_account.withdraw(200.0)) {
        cout << "In withdraw\nThe new balance is: " << ahmed_account.get_balance() << endl;
    }

    else {
        cout << "Unable to withdraw\nThe Current balance is: " << ahmed_account.get_balance() << endl;
    }

    if (ahmed_account.withdraw(1500.0)) {
        cout << "In withdraw\nThe new balance is: " << ahmed_account.get_balance() << endl;
    }

    else {
        cout << "Unable to withdraw\nThe Current balance is: " << ahmed_account.get_balance() << endl;
    }

    return 0;
}