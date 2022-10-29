/*Lesson 7 ex2
* Roman Gilgor
*/

#include<iostream>
#include<iomanip>
using namespace std;

void fill_2D_array(int arr[][10], int row, int col);
void print_2D_array(int arr[][10], int row, int col);


int main() {
	
	int arr[10][10];
	
	fill_2D_array(arr, 10, 10);
	print_2D_array(arr, 10, 10);


	return 0;
}

void fill_2D_array(int arr[][10], int row, int col) {
	for (int i = 0; i < row; i++)  // rows
		for (int j = 0; j < col; j++) // column
			arr[i][j] = (i + 1) * (j + 1);

}

void print_2D_array(int arr[][10], int row, int col) {

	for (int i = 0; i < row; i++) { // rows
		for (int j = 0; j < col; j++) // column
			cout << setw(4) << arr[i][j];

		cout << endl;
	}

}



