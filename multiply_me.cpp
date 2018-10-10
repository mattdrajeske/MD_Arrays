#include "multiply_me.h"
#include <iostream>
#include <iomanip>
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

	//outer loop, prints to console top header
	for (int i = 0; i < ROWS; i++) {
		
		cout << "\t";

		if (i == 0) {

			for (int k = 0; k < COLUMNS; k++) { //top header
				cout << "   " << setw(2) << (k + 1) << ":";
			}

		}

		//inner loop, prints to console side header
		for (int j = 0; j < COLUMNS; j++) {
			if (j == 0) {
				cout << "\n\n";
			}
			cout << "   " << setw(3) << table[i][j];
			if (j == (COLUMNS - 1)) {
				cout << "\n\n";
			}
		}
	}

}