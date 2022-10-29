/*Lesson 6 ex3
* Roman Gilgor
*/

#include<iostream>
using namespace std;

void min_max_arr(double arr[], int size);

int main() {

	double array[10]; 

	for (int i = 0; i < 10; i++) {
		cout << "Please enter array[" << i << "] = " << endl;
		cin >> array[i];
	}

	min_max_arr(array, 10);
	
	return 0;
}

void min_max_arr(double arr[], int size) {

	double max_arr = arr[0], min_arr = arr[0];
	int index_min = 0, index_max = 0;

	for (int i = 1; i < size; i++) {
		
		if (arr[i] > max_arr) {
			max_arr = arr[i];
			index_max = i;
		}
		
		if (arr[i] < min_arr) {
			min_arr = arr[i];
			index_min = i;
		}
	}

	cout << "Max value is: " << max_arr << ". Its index is:  " << index_max << endl;
	cout << "Min value is: " << min_arr << ". Its index is:  " << index_min << endl;


}


