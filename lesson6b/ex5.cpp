/*Lesson 7 ex5
* Roman Gilgor
*/

#include<iostream>
using namespace std;

void fill_2D_array(double arr[][3], int row, int col);
bool is_symetric(double arr[][3], int row, int col);


int main() {
	
	double arr[3][3];
	bool flag; 

	fill_2D_array(arr, 3, 3);
	flag = is_symetric(arr, 3, 3);

	if (flag == true)
		cout << "The matrix is symetric";
	else
		cout << "The matrix is not symetric";


	return 0;
}

void fill_2D_array(double arr[][3], int row, int col) {
	for (int i = 0; i < row; i++)  // rows
		for (int j = 0; j < col; j++) {// column
			cout << "arr[" << i << "]" << "[" << j << "] = : " << endl;
			cin >> arr[i][j];
		}
}

bool is_symetric(double arr[][3], int row, int col) {

	if (row != col)
		return false;

	for (int i = 0; i < row; i++)  // rows
		for (int j = 0; j < col; j++) { // cols
			if (arr[i][j] != arr[j][i])
				return false;
		}

	return true;


}
