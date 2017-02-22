#include "Loader.h"

Loader::Loader()
{
	name = "Blank";
	tempval = 5;
}
Loader::Loader(std::string name, int tempval, int age,std::string bank)
{
	this->name = name;
	this->tempval = tempval;
	this->age = age;
	this->bank = bank;
}

std::string Loader::dumpp(Loader l) {
	std::string var = std::string("Name: ") + l.name + " Value : "+ std::to_string(l.tempval);
	return var;
}
