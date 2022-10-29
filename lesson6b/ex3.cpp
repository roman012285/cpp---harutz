/*Lesson 7 ex3
* Roman Gilgor
*/

#include<iostream>
using namespace std;

void fill_2D_array(double arr[][5], int row, int col);
double diag_sum(double arr[][5], int num);


int main() {
	
	double arr[5][5];
	double diag_summ; 

	fill_2D_array(arr, 5, 5);
	diag_summ = diag_sum(arr, 5);

	cout << "Sum of elements on diagonal is: " << diag_summ << endl;

	return 0;
}

void fill_2D_array(double arr[][5], int row, int col) {
	for (int i = 0; i < row; i++)  // rows
		for (int j = 0; j < col; j++) {// column
			cout << "arr[" << i << "]" << "[" << j << "] = : " << endl;
			cin >> arr[i][j];
		}
}

double diag_sum(double arr[][5], int num) {

	double sum = 0;

	for (int i = 0; i < num; i++)
		sum = sum + arr[i][i];

	return sum;

}





