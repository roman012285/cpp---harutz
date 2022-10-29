/*Lesson 6b ex1
* Roman Gilgor
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	
	int arr[2][4];


	// Scaning array
	for (int i = 0; i < 2; i++) { // rows
		for (int j = 0; j < 4; j++) {// column
			cout << "Please enter arr[" << i << "][" << j << "]: " << endl;
			cin >> arr[i][j];
		}
	}

	// Printing array
	for (int i = 0; i < 2; i++) { // rows
		for (int j = 0; j < 4; j++) // column
			cout << setw(3) << arr[i][j];

		cout << endl;
	}

	return 0;
}

