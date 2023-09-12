#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <string>

class Account{

private:
    //attributes

    std::string name;
    double balance;

public:
    //methods

    //inline methods
    void set_balance(double amount) {balance = amount;}
    double get_balance() {return balance;}

    // Prototypes
    void set_name(std::string n);
    std::string get_name();
    bool deposit(double bal);
    bool withdraw(double bal);

};


#endif // __ACCOUNT_H__
