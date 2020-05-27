//
// Created by Arias Arevalo, Carlos on 5/27/20.
//

#ifndef BINARY_SEARCH_TREE_BOOK_H
#define BINARY_SEARCH_TREE_BOOK_H

#include "comparable.h"

#include <string>
#include <vector>
using std::string;
using std::vector;

class Book : public Comparable {
	string _name;
	vector<string> _authors;
	string _isbn;
public:
	Book(const string& name, const string& isbn);
	void AddAuthor(const string& author);
	const string* GetAuthor(size_t index)const;
	string GetISBN()const;
	string GetName()const;
	int CompareTo(const Comparable &rhs) const ;
	string ToString() const ;
	bool Equals(const Object &rhs) const ;

};


#endif //BINARY_SEARCH_TREE_BOOK_H
