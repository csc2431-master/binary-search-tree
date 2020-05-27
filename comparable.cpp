//
// Created by Arias Arevalo, Carlos on 5/27/20.
//
#include "object.h"
#include "comparable.h"

#include <sstream>
using std::stringstream;


string Comparable::ToString() const {
	stringstream retVal;
	retVal << "Comparable @ " << this;
	return retVal.str();
}


