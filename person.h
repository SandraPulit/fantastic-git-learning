#pragma once
#include <string>

using namespace std;

class person
{
private:
	string firstName,
		lastName;

public:
	person();
	person(string f, string ln);
	~person();
	bool operator<(const person &naz) const {		// operator porównuj¹cy nazwiska
		return lastName < naz.lastName;
	}

	void setFirstName(string f) {
		firstName = f;
	}

	void setLastName(string ln) {
		lastName = ln;
	}

	string getFirstName() {
		return firstName;
	}

	string getLastName() {
		return lastName;
	}
};