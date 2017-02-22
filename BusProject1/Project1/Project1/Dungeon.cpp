#include "Dungeon.h"
Dungeon::Dungeon(){
		rooms = 0;
		dlevel = 0;
}

Dungeon::Dungeon(float levelpass){
	int seed;
	int temp;
	if (levelpass <= 10) {
		temp = rand() % 7 + 2;
		dlevel = temp;
		seed = 1;
	}
	else if (levelpass <= (float)20 && levelpass >= (float)10) {
		temp = rand() % 14 + 7;
		dlevel = temp;
		seed = 2;
	}
	else if (levelpass >= (float)30 ) {
		temp = rand() % 21 + 14;
		dlevel = temp;
		seed = 3;
	}
	//Room numbers
	if (seed = 1) {
		temp = rand() % 10 + 3;
		rooms = temp;
	}
	if (seed = 2) {
		temp = rand() % 15 + 7;
		rooms = temp;
	}

	if (seed = 3) {
		temp = rand() % 25 + 13;
		rooms = temp;
		temp = rand() % 6 + 1;
		if (temp == 1) {
			superdungeon = true;
		}

	}
	std::cout << "Seeded!" << std::endl;
}
