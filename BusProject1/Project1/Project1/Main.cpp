#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
#include <ostream>
#include <vector>

#include "Player.h"
#include "Dungeon.h"

int main(int argc, char* argv[]) { // ADD COMMAND LINE ARGUMENTS FOR LOADING
	int pause, menuloop, intro, confirm; // PREGAME SETUP
	int gameloop;
	int agi, str, mp, hp;
	int skill = 40;
	std::string name;
	srand(time(NULL)); //Seed
	

	
	do {
		std::cout << "Hello! What would you like to do today?" << std::endl << "1. New Game  2. Load  3.  Exit" << std::endl;
		std::cin >> intro;
		if (intro == 1) {

			std::cout << "What is your name?" << std::endl;
			std::cin >> name;

			do {
				std::cout << "You have 40 unallocated skill points!" << std::endl
					<< "Please enter your agility: " << std::endl;
				std::cin >> agi;
				skill = skill - agi;
				std::cout << "You have: " << skill << " more points left to allocate" << std::endl;
				std::cout << "Please enter your strength: " << std::endl;
				std::cin >> str;
				skill = skill - str;
				std::cout << "You have: " << skill << " more points left to allocate" << std::endl;
				std::cout << "Please enter your magic level: " << std::endl;
				std::cin >> mp;
				skill = skill - mp;
				std::cout << "You have: " << skill << " more points left to allocate" << std::endl;
				std::cout << "Please enter your desired health: " << std::endl;
				std::cin >> hp;
				skill = skill - hp;
				std::cout << "You have chosen:" << agi << " Agility  " << str << "  Strength  " << mp << "  Magic  " << std::endl <<
					"Press 1 to confirm or anything else to reallocate " << std::endl;
				std::cin >> confirm;
				if (hp == 0) {
					std::cout << "You need at least ONE health point" << std::endl;
					confirm = 0;
				}
				if (skill < 0) {
					confirm = 0;
					std::cout << "You allocated too many points!" << std::endl;
					skill = 40;
				}

			} while (confirm != 1);

			Player proj(name, agi, str, mp, hp);
			proj.displayStats(std::cout);
			
			////////
		do {

				std::cout << "1: Enter a Dungeon  2. Check Stats  3. Check HP  4. Check Inventory  5. Exit " << std::endl;
				std::cin >> gameloop;
				if (gameloop == 1) {
					//std::cout << getpass << std::endl;
					Dungeon dung(proj.getLevel());
				}

				if (gameloop == 2) {
					proj.displayStats(std::cout);

				}
				if (gameloop == 3) {
					std::cout << "You currently have: " << proj.getHP() << " health." << std::endl;
				}
				if (gameloop == 4) {
					proj.getItems(); // FILLER UNTIL FULL ITEM IMPLEMENTATION
				}
				if (gameloop == 5) {
					std::cout << "Good bye!" << std::endl;
					break;
				}
			} while (gameloop != 0);


			/////////
		}
		else if (intro == 2 && argc == 1) {


		}
		if (intro == 2 && argc != 1) {
			std::cout << "No save file present!" << std::endl;
		}

		
		
		} while (intro != 3 && confirm != 1);
	
		std::cout << "pause";
		std::cin >> pause;
		return 0;
	}
