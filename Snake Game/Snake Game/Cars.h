#pragma once
#include "myheader.h"



class Cars
{
public:
	Cars();
	~Cars();
	int makePriceList(int e) const;
	string makeNamesList(int e) const;
	void printCarsHead() const;
	void throwAChoiceForLogin() ;

private:
	unsigned int const static wheels, model;
	int *prices = new int[11];
	const string names[11] = { "BMW", "Ferrari", "Cadilac", "Lambo", "Supra" , "BMW M3", "Audi", "AMG", "Hummer", "CLS 63", "Audi S4"};
	string response, username, pass;
	Bank new_account;
};

