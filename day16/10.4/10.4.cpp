//10.4.cpp
#include <10.4.h>

int SavingAccount::account_number=0;


SavingAccount::SavingAccount(double b,double i)
{
    account_number+=1;
    ID=account_number;
    balance=b;
    interest=i;

}

void SavingAccount::Change_interest(double new_interest){
    this->interest=new_interest;
}

void SavingAccount::Calc_newbalance(){
    this->balance=balance*(1+this->interest);
}

void SavingAccount::Show_status() const{
    std::cout<<"||ID: "<<this->ID<<"||interest:"<<this->interest
    <<"||Balance:"<<this->balance<<"||"<<std::endl;
}

SavingAccount::~SavingAccount()
{
    account_number-=1;
}