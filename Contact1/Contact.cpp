#include "pch.h"
#include "Contact.h"
#include <string>
using std::string;

//default constructor
Contact::Contact() {
	name = "change this";
	state = "change this";
	email = "change this";
	phoneNum = "change this";
}

//normal constructor
Contact::Contact(const string &name, const string &state, const string &email, const string &phoneNum) : name(name), state(state), email(email) {
	setPhone(phoneNum);
}

//sets constructors
void Contact::setName(const string &name) {
	this->name = name;
}
void Contact::setState(const string &state) {
	this->state = state;
}
void Contact::setEmail(const string &email) {
	this->email = email;
}
//this one verifies that it is a valid phone number length
void Contact::setPhone(const string &phoneNum) {
	if (phoneNum.length() != 7) {
		this->phoneNum = "change this";
	}
	else {
		this->phoneNum = phoneNum;
	}
}
//class does not include gets, since they were declared in header
Contact::~Contact() {};