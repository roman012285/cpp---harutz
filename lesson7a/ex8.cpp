/*
	lesson 7a ex8
*/

#include<iostream>

using namespace std;

#define ROWS 3
#define COLS 2

void min_arr2D(int a[][COLS], int* min);

int main() {
	
	int a[ROWS][COLS] = { { 7, -3}, { 3, 4}, { 5, 6} };
	int min;

	min_arr2D(a, &min);

	cout << "The minimum value is: " << min;


	return 0;
}

void min_arr2D(int a[][COLS], int* min) {

	*min = **a;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (*(*(a + i) + j) < *min)
				*min = *(*(a + i) + j);
		}
	}

}
