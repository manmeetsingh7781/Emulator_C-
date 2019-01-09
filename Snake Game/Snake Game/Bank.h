#pragma once
#include "myheader.h"

class Bank
{
public:
	Bank();
	~Bank();

	void setBank(string n, string pass);
	void Login();
	void makeDeposit(double amount);

private:
	double account_balance;
	string name;
	string password;

};

