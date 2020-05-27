#ifndef COMPARABLE_H
#define COMPARABLE_H

#include "object.h"
#include <string>
using std::string;

class Comparable : public Object{
public:
	virtual int CompareTo(const Comparable& rhs)const=0;
	virtual string ToString()const;
};


#endif
