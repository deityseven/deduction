#include "inv.h"

Inv::Inv(QObject *parent)
	: QObject(parent)
{
}

Inv::Inv(const Inv& other)
{
	this->_age = other._age;
}

Inv::~Inv()
{
}
