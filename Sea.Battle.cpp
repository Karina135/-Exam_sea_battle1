#include <iostream>
#include "CreatePlayerField.h"
#include "CreateShotsField.h"
#include "ActionSetShips.h"
#include "Actions.h"

int main()
{
  while (true) {
    // Тут будет игра
    int** playerField = createPlayerField();
    int** shotsField = createShotsField();
    //actionSetShips(playerField);
    actionDisplayField(playerField);

    break;
  }
  
  return 0;
}
