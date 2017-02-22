#include "Player.h"
Player::Player() {
	name = "\0";
	agi = 0;
	str = 0;
	mp = 0;
	hp = 0;
	level = 0;
	std::cout << "Constuctor called" << std::endl;
}
Player::Player(std::string namep, int agip, int strp, int mpp, int hpp) {
	std::cout << "Constructor called" << std::endl;
	name = namep;
	agi = agip; str = strp; mp = mpp; hp = hpp;
	level = ((agi * .2) + (str*.2) + (mp*.2) + (hp*.2));
}

std::ostream & Player::displayStats(std::ostream & os){
	os << "Your level is: " << level << " And Your stats are currently: ";
	os << "Agility:  " << agi << " Strength: " << str << " Magic: " << mp << " Hp: " << hp << std::endl;
	return os;
}

void Player::getItems() {
	Items *item = new Items();
	Inventory.push_back(item);
	std::cout << "Added to vector" << std::endl;
	for (auto i : Inventory) {
		i->displayInventory(std::cout);
	}
}