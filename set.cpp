#include<iostream>
#include "ActionSetShips.h"

void actionSetShips(int**& ships) {
	
		std::cin >> x >> y;


		if (i < 4) {
			ships[x][y] = 1;
		}

		else if (i < 6) {
			ships[x][y + 1] = 2;
			ships[x][y] = 2;
		}

		else if (i < 8) {
			ships[x][y + 3] = 3;
			ships[x][y] = 3
;
		}
		else if (i < 10) {
			ships[x][y + 3] = 4;
			ships[x][y] = 4;
			ships[x][y + 2] = 3;
			ships[x][y + 1] = 3;
			ships[x][y] = 3;
		}


		else if (i < 10) {
			ships[x][y + 2] = 4;
			ships[x][y + 1] = 4;
			ships[x][y + 1] = 4;
			ships[x][y] = 4 ;
		}		    
	}


}
