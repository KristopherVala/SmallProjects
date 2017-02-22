#include "Items.h"

Items::Items() {
	std::cout << "Constructor called for items" << std::endl;
	itemId = 1;
	itemName = "Temp";
}

std::ostream & Items::displayInventory(std::ostream &os)
{
	os << "Your item is: " << itemName << " And the item id is: " << itemId << std::endl;
	return os;
}
