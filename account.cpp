#include "account.h"
#include <string>

std::string Account::get_name() {
    return name;
}

void Account::set_name(std::string n) {
    name = n;
}

bool Account::deposit(double bal) {
    //verification part (will be done later)
    balance += bal;
    return true;
}

bool Account::withdraw(double bal) {
    if(balance - bal >= 0) {
        balance -= bal;
        return true;
    } else {
        return false;
    }
}
