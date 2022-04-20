#include <iostream>
#include "CreatePlayerField.h"
#include "CreateShotsField.h"
#include "ActionSetShips.h"

int main()
{
  while (true) {
    // Тут будет игра
    int** playerField = createPlayerField();
    int** shotsField = createShotsField();
    actionSetShips(playerField);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << playerField[i][j];

        }
        std::cout << std::endl;
    }
    

    break;
  }
  
  return 0;
}
