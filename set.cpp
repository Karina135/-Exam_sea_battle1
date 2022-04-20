#include<iostream>
#include "ActionSetShips.h"

void actionSetShips(int**& ships) {
	for (int i = 0; i < 10; i++) {
		int x, y;

		std::cin >> x >> y;
		
		if (i < 4) {
			ships[x][y] = 1;
		}
		else if (i < 6) {
			ships[x][y + 1] = 1;
			ships[x][y] = 1;
		}
		else if (i < 8) {
			ships[x][y + 2] = 1;
			ships[x][y] = 1;
		}
		else if (i < 10) {
			ships[x][y + 3] = 1;
			ships[x][y] = 1;
		}

		
	}


}
