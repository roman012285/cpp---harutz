/*Lesson 6 ex5
* Roman Gilgor
*/

#include<iostream>
using namespace std;

void missing_num(int arr[], int size);


int main() {
	
	int arr[] = { 20, 19, 17, 16, 18, 14, 13, 11, 12, 8, 9, 10, 7, 5, 6, 3, 4, 2, 1 }; // 15 is missing

	missing_num(arr, sizeof(arr) / sizeof(int));

	return 0;
}

void missing_num(int arr[], int size) {

	int sum = 210;
	int par_sum = 0;

	for (int i = 0; i < size; i++) 
		par_sum = par_sum + arr[i];
	
	cout << "The missing number is: " << sum - par_sum << endl;

}
