/*
	lesson 6d ex3a and 3b
*/

#include<iostream>
#include<ctime>

using namespace std;

#define ROWS 10
#define COLS 10

void getchar_mat(char mat[][COLS]);
void printchar_mat(char mat[][COLS]);

int main() {
	
	char mat[ROWS][COLS];

	getchar_mat(mat);
	printchar_mat(mat);

	return 0;
}

void getchar_mat(char mat[][COLS]) {

	srand(int(time(NULL)));

	for(int i = 0; i < COLS; i++)
		for (int j = 0; j < ROWS; j++) {
			if (rand() % 2 == 0)
				mat[i][j] = '*';
			else
				mat[i][j] = '.';
		}
		
}

void printchar_mat(char mat[][COLS]) {

	for (int i = 0; i < COLS; i++) {
		for (int j = 0; j < ROWS; j++) {
			cout << mat[i][j];
		}

		cout << endl;
	}

}


