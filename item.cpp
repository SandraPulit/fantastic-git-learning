#include "item.h"

item::item()
{
}

item::item(char sy, int y) : symbol(sy), year(y) {}


item::~item()
{
}

string item::getString()
{
	string sth;
	stringstream ss;						//jak cout i parsuje tez liczby na stringa

	ss << symbol << ": " << year;
	ss >> sth;

	return sth;
}