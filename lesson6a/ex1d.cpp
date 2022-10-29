/*Lesson 6 ex1d
* Roman Gilgor
*/

#include<iostream>
using namespace std;

void print_arr(int arr[], int size);

int main() {

	int array[15]; // array[0] ... array[14]

	for (int i = 0; i < 15; i++) {
		cout << "Please enter array[" << i << "] = " << endl;
		cin >> array[i];
	}
	
	print_arr(array, 15);

	return 0;
}

void print_arr(int arr[], int size) {

	for (int i = 0; i < size; i++) 
		cout << "Array[" << i << "] = " << arr[i] << endl;
}

