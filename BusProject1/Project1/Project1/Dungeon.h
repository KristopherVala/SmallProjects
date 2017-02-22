#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
#include <ostream>
#include <vector>
	class Dungeon {
		int rooms;
		int dlevel;
		bool superdungeon;

	public:
		Dungeon();
		Dungeon(float);
		const bool isSuper() {return superdungeon;}


	};
