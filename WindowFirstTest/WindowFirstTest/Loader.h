#pragma once
#include <string>
#include <iostream>

public class Loader
{
	std::string name, bank;
	int tempval, age;
public:
	Loader();
	Loader(std::string, int, int,std::string);


	std::string dumpp(Loader l);
	std::string getName() { return name; };
	std::string getBalance() { return std::to_string(tempval); };
	std::string getBank() { return bank; };
	std::string getAge() { return std::to_string(age); };
	void setName(std::string name) { this->name = name; };
	void setTemp(int tempval) { this->tempval = tempval; };
};

