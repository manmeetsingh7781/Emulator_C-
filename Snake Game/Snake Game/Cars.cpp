#include "Cars.h"
#include "Bank.h"


Cars::Cars()
{
	this->printCarsHead();
	for (int each = 0; each < 11; each++) {
		if (each == 0) {
			cout << setw(30)  << " " << setw(30)  << " " << setw(10) << endl << endl;
		}
		cout << this->makeNamesList(each) << setw(30) << this->makePriceList(each) << setw(10) << endl << endl;
	}
	throwAChoiceForLogin();
}

int Cars::makePriceList(int e) const {
		this->prices[e] = (int) pow(e+10, 2) *  (100 + (rand() % 400));
		return  prices[e];
}

void Cars::printCarsHead() const {
	cout << setw(32)  << "Choose A Car"  << endl;
	
}

void Cars::throwAChoiceForLogin()  {


	cout << endl << "Create A bank Account \nPress 1. to Create one \nPress 2. for Login " << endl << endl;
	cin >> response;
	if (response == "1") {
		cout << "Enter you're name" << endl;
		cin >> username;
		cout << "Create New Password" << endl;
		cin >> pass;
		new_account.setBank(username, pass);
		
	}
	else {

		cout << "Enter you're name" << endl;
		cin >> username;
		cout << username <<" please enter you're account Password" << endl;
		cin >> pass;
		cout << "Legged in successfully";
		
	}

}

string Cars::makeNamesList(int e) const {
		return  names[e];
}


Cars::~Cars()
{
	// Cleaning up the memory after process is done;
	delete[] this->prices;

}

