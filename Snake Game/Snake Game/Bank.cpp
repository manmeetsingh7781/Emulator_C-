#include "Bank.h"



Bank::Bank()
{
}

void Bank::setBank(string n, string pass)  {
	long long account_number = 9999999L + (rand() % 9999999999999999999L);
	this -> name = n;
	this->password = pass;
	cout <<endl << this->name << " youre account has been Created and youre account number is " << account_number << endl;

}

Bank::~Bank()
{
}
