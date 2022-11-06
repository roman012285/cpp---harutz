/*
	lesson 6d ex3cdef
*/

#include<iostream>
#include<ctime>

using namespace std;

#define ROWS 5
#define COLS 5

void getchar_mat(char mat[][COLS]);
void printchar_mat(char mat[][COLS]);
bool is_in(char mat[][COLS], int i, int j);
int num_of_neighbors(char mat[][COLS], int i, int j);
void Game(char mat[][COLS]);

int main() {
	
	char mat[ROWS][COLS];

	cout << "THIS IS YOUR GANE!!!" << endl;
	
	getchar_mat(mat);
	printchar_mat(mat);

	cout << endl;

	Game(mat);

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

bool is_in(char mat[][COLS], int i, int j) {

	if ((i >= 0) && (i < ROWS) && (j >= 0) && (j < COLS))
		return true;
	else
		return false;

}


int num_of_neighbors(char mat[][COLS], int i, int j) {

	int cnt = 0;

	for (int i_offset = -1; i_offset <= 1; i_offset++){
		for (int j_offset = -1; j_offset <= 1; j_offset++) {
			if (is_in(mat, i + i_offset, j + j_offset) == false)
				continue;
			if (mat[i + i_offset][j + j_offset] == '*')
				cnt++;
		}
	}
	
	return cnt;
}

void Game(char mat[][COLS]) {
	for (int i = 0; i < COLS; i++)
		for (int j = 0; j < ROWS; j++) {
			if ((mat[i][j] == '.'))
				mat[i][j] = (num_of_neighbors(mat, i, j)) + 48; 
		}
}

