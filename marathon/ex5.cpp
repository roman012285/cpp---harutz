/* Exam Solution */

#include<iostream>

using namespace std;

int* delDev10(int* arr, int size, int* newSize);

int main() {
	
	int arr[] = { 1, 2, 10, 3, 50, 70, 47 };
	int newSize;
	int* new_arr = delDev10(arr, sizeof(arr)/sizeof(int), &newSize);

	for (int i = 0; i < newSize; i++)
		cout << new_arr[i] << " ";

	return 0;                      
}

int* delDev10(int* arr, int size, int* newSize) {

	int cnt = 0;

	for (int i = 0; i < size; i++)
		if (arr[i] % 10 == 0)
			cnt++;

	int* new_arr = new int[size - cnt];
	int j = 0;

	*newSize = size - cnt;

	for (int i = 0; i < size; i++)
		if (arr[i] % 10 != 0) {
			new_arr[j] = arr[i];
			j++;
		}
	
	return new_arr;


}