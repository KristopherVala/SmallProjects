
#include <string>
#include <iostream>

class Items {
	std::string itemName;
	int itemId;
public:
	Items();
	std::ostream& displayInventory(std::ostream&);

};