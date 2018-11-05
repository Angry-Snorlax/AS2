#ifndef Contact_H
#define Contact_H
//include for string
#include "pch.h"
#include <string>
using std::string;

class Contact {
public:
	//constructors, one empty, one with 4 variables
	Contact();
	Contact(const string &name, const string &state, const string &email, const string &phoneNum);
	~Contact();

	//"get" methods
	string getName() {
		return name;
	}
	string getState() {
		return state;
	}
	string getEmail() {
		return email;
	}
	string getPhone() {
		return phoneNum;
	}

	//"set" prototypes
	void setName(const string &);
	void setState(const string &);
	void setEmail(const string &);
	void setPhone(const string &);

	//variable declarations
private:
	string name;
	string state;
	string email;
	string phoneNum;
};

#endif //Contact_H
