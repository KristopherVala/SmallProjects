#include <string>
#include <vector>
#include <iostream>
#include "Items.h"

	class Player {
	
		std::string name;
		int agi, str, mp, hp;
		float level;
		std::vector<Items*>Inventory;

	public:
		Player();
		Player(std::string, int, int, int, int);

		const int getAgi() {
			return agi;
		}
		const int getStr() {
			return str;
		}
		const int getMp() {
			return mp;
		}
		const int getHP() {
			return hp;
		}
		const float getLevel() {
			return level;
		}
		void getItems();

		std::ostream& displayStats(std::ostream&);

	};

	