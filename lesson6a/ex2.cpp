/*Lesson 6 ex2
* Roman Gilgor
*/

#include<iostream>
using namespace std;
#define SIZE 5

void print_arr(int arr[]);
void fill_arr(int arr[]);

int main() {

	int array[SIZE]; 

	fill_arr(array);
	print_arr(array);
	
	return 0;
}

void fill_arr(int arr[]) {

	for (int i = 0; i < SIZE; i++) {
		cout << "Please enter array[" << i << "] = " << endl;
		cin >> arr[i];
	}

}

void print_arr(int arr[]) {

	for (int i = 0; i < SIZE; i++) 
		cout << "Array[" << i << "] = " << arr[i] << endl;
}

