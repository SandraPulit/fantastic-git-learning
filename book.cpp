#include "book.h"

book::book()
{
	symbol = 'K';
}

book::book(string t, string p, int y) : item('K', y), title(t), publisher(p) {}


book::~book()
{
}