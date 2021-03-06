#include "pch.h"
#include <string>
#include <iostream>
#include "Contact.h"
#include <vector>

using namespace std;
using std::vector;
using std::string;

int main()
{
	Contact def;
	Contact eric = { "Eric Lemay", "Maine", "lemaye@thomas.edu", "1234567" };
	Contact chase = { "Chase Colford", "Maine", "colfordc@thomas.edu", "12345678" };
	vector<Contact> three = { def, eric, chase };
	for (int i = 0; i < 3; i++) {
		cout << "Name:  " << three[i].getName() << endl;
		cout << "State: " << three[i].getState() << endl;
		cout << "Email: " << three[i].getEmail() << endl;
		cout << "Phone: " << three[i].getPhone() << endl << endl;
	}
	cout << endl << endl;
	Contact one = three[0];
	Contact *two = &three[1];
	Contact &tee = three[2];
	one.setEmail("good try dawg");
	two->setState("not Maine");
	tee.setName("Not Chase");
	for (int i = 0; i < 3; i++) {
		cout << "Name:  " << three[i].getName() << endl;
		cout << "State: " << three[i].getState() << endl;
		cout << "Email: " << three[i].getEmail() << endl;
		cout << "Phone: " << three[i].getPhone() << endl << endl;
	}
	//the first one didn't change because we're editing the copy, and not the original object.
}