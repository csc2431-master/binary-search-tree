//
// Created by Arias Arevalo, Carlos on 5/27/20.
//

#include "book.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

int Book::CompareTo(const Comparable &rhs) const {
	if (this == &rhs)
		return true;
	const Book* rhsPtr = dynamic_cast<const Book*>(&rhs);
	if (rhsPtr == nullptr)
		return false;
	return _isbn.compare(rhsPtr->_isbn);
}

string Book::ToString() const {
	stringstream ss;
	ss << "Book: {name: " << _name << ", isbn: " << _isbn << ", authors: [";
	for (size_t i=0; i<_authors.size(); i++){
		if (i != _authors.size() - 1)
			ss << _authors[i] << ", ";
		else
			ss << _authors[i];
	}
	ss << "]}";
	return ss.str();
}

bool Book::Equals(const Object &rhs) const {
	if (this == &rhs)
		return true;
	const Book* rhsPtr = dynamic_cast<const Book*>(&rhs);
	if (rhsPtr == nullptr)
		return false;
	return rhsPtr->_isbn == _isbn;
}

Book::Book(const string &name, const string &isbn):_name(name), _isbn(isbn) {

}

void Book::AddAuthor(const string &author) {
	bool found = false;
	for (string a : _authors) {
		if (a == author){
			found = true;
			break;
		}
	}
	if (!found)
		_authors.push_back(author);
}

const string *Book::GetAuthor(size_t index) const {
	if (index >= _authors.size())
		return nullptr;
	else
		return &_authors.at(index);
}

string Book::GetISBN() const {
	return _isbn;
}

string Book::GetName() const {
	return _name;
}
