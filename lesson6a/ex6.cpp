/*Lesson 6 ex6
* Roman Gilgor
*/

#include<iostream>
using namespace std;

void sort_array(int arr[], int size);


int main() {
	
	int arr[] = { 20, 19, 17, 16, 18, 14, 13, 11, 11, 8, 9, 9, 7, 5, 6, 3, 4, 2, 1, 15}; 

	// Printing unsorted array
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << arr[i] << " "; 

	cout << endl;

	sort_array(arr, sizeof(arr) / sizeof(int));

	// Printing sorted array
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;
}

void sort_array(int arr[], int size) {

	int temp;

	for(int i = 0; i < size - 1 ; i++)
		for(int j = 0; j < size - 1; j++){
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

}