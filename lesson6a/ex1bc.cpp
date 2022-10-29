/*Lesson 6 ex1bc
* Roman Gilgor
*/

#include<iostream>
using namespace std;

#define SIZE 10  

int main() {

	double arr[SIZE];

	// Filling Array
	for (int i = 0; i < SIZE; i++) {
		cout << "Please enter arr[" << i << "] = " << endl;
		cin >> arr[i];
	}

	// Printing Array
	for (int i = 0; i < SIZE; i++)
		cout << "arr[" << i << "] = " << arr[i] << endl;
	


	return 0;
}

