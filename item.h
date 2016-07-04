#pragma once

#include <string>
#include <sstream>
#include "person.h"

using namespace std;

class item
{
protected:
	char symbol;
	int year;
	string enumeration;

public:
	item();
	item(char, int);
	virtual ~item();

	void setYear(int r) {
		year = r;
	}

	int getYear() {
		return year;
	}

	void setSymbol(char ozn) {
		symbol = ozn;
	}

	char getSymbol() {
		return symbol;
	}

	void setEnum(string e) {
		enumeration = e;
	}

	string getEnum() {
		return enumeration;
	}
	
	virtual void print(ostream &stream) = 0;					//do polimorfizmu, wska�niki widz� jak� metod� wywo�a�
	virtual person getAuthor(int n) = 0;		//�eby mo�na by�o wykorzysta� metody klas dziedzicz�cych w OpusTable
	virtual size_t getAuthorsAmount() = 0;
	virtual string getString();
};