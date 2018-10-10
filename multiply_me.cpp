#include "multiply_me.h"
#include <iostream>
#include "stdafx.h"

using namespace std;

void multiply_me() {
	const int ROWS = 10;
	const int COLUMNS = 10;
	int table[ROWS][COLUMNS];

	//fills array
	for (int i = 0; i < ROWS; i++) { 

		for (int j = 0; j < COLUMNS; j++) {
			table[i][j] = (i+1)*(j+1);
	
		}
	}

	//outer loop
	for (int i = 0; i < ROWS; i++) {
		if (i == 0) {

			//prints the header for the rows
			for (int k = 0; k < ROWS; k++) {
				cout << "   " << k + 1;
			}

			//prints header for the columns
			for (int l = 0; l < ROWS; l++) {
				cout << "\n\n" << l + 1;
			}
		}

		cout << "\t";

		//inner loop
		for (int j = 0; j < COLUMNS; j++) {
			cout << "\n\n" << table[i][j];
		}
	}

}