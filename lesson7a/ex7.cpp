/*
	lesson 7a ex7
*/

#include<iostream>

using namespace std;

#define ROWS 3
#define COLS 2

int main() {
	
	int a[ROWS][COLS] = { { 1, 2}, { 3, 4}, { 5, 6} };

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			cout << *(*(a + i) + j);
		cout << endl;
	}

	return 0;
}



