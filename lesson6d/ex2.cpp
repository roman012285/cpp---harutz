/*
	lesson 6d ex2
*/

#include<iostream>

using namespace std;

bool is_diff(int a[], int size);

int main() {
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	int length = sizeof(arr) / sizeof(int);

	if (is_diff(arr, length) == false)
		cout << "false";
	if (is_diff(arr, length) == true)
		cout << "true";


	return 0;
}

bool is_diff(int a[], int size) {

	int temp;

	for(int i = 0; i < size - 1; i++){
		temp = a[i];
		for (int j = i + 1; j <= size - 1; j++) {
			if (temp == a[j])
				return false;
		}
	}
	
	return true;
}


