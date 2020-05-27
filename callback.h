//
// Created by Arias Arevalo, Carlos on 5/22/20.
//

#ifndef CALLBACK_CLASSES_CALLBACK_H
#define CALLBACK_CLASSES_CALLBACK_H

#include "object.h"

class Callback : public Object {
public:
	virtual void DoSomething(const Object* object)const = 0;
};

#endif //CALLBACK_CLASSES_CALLBACK_H
