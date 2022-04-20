int** createPlayerField() {
	const int size = 10;

	int** playerField = new int*[size];

	for (int i = 0; i < size; i++) {
		playerField[i] = new int[size];

		for (int j = 0; j < size; j++) {
			playerField[i][j] = 0;
		}
	}

	return playerField;
}
