//10.4.h
#ifndef SavingAccount_H
#define SavingAccount_H
#include <iostream>

class SavingAccount
{
private:
    static int account_number;
    int ID=SavingAccount::account_number;
    double balance,interest;
public:
    SavingAccount(double b,double i);

    void Change_interest(double new_interest);

    void Calc_newbalance();

    void Show_status() const;
    ~SavingAccount();
};



#endif