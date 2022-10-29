/*Lesson 7 ex4
* Roman Gilgor
*/

#include<iostream>
using namespace std;

void fill_2D_array(double arr[][5], int row, int col);
double avg_arr(double arr[][5], int row, int col);


int main() {
	
	double arr[3][5];

	fill_2D_array(arr, 3, 5);
	
	cout << "The average value is: " << avg_arr(arr, 3, 5) << endl;

	return 0;
}

void fill_2D_array(double arr[][5], int row, int col) {
	for (int i = 0; i < row; i++)  // rows
		for (int j = 0; j < col; j++) {// column
			cout << "arr[" << i << "]" << "[" << j << "] = : " << endl;
			cin >> arr[i][j];
		}
}

double avg_arr(double arr[][5], int row, int col) {

	double sum = 0;

	for (int i = 0; i < row; i++)  // rows
		for (int j = 0; j < col; j++) // column
			sum += arr[i][j];
		
	return (sum / (double(row) * double(col)));


}



