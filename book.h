#pragma once
#include "item.h"
#include "person.h"
#include <vector>

class book:
	public item
{
private:
	vector<person> author;
	string	title,
		publisher;

public:
	book();
	book(string t, string p, int y);
	~book();

	void addAuthor(person a) {
		author.push_back(a);
	}

	void setTitle(string t) {
		title = t;
	}

	void setPublisher(string w) {
		publisher = w;
	}

	string getTitle() {
		return title;
	}

	string getPublisher() {
		return publisher;
	}

	void print(ostream &stream) {
		stream << ". " << getTitle() << ". " << getPublisher() << ". " << getYear() << ".";
	}

	person getAuthor(int n) {
		return author[n];
	}

	size_t getAuthorsAmount() {
		return author.size();
	}
};

