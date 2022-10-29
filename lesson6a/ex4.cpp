/*Lesson 6 ex4
* Roman Gilgor
*/

#include<iostream>
using namespace std;

bool is_same_arr(int a[], int b[], int size_a, int size_b);

int main() {

	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 1, 2, 3, 4, 5 };

	int size_a = sizeof(a) / sizeof(int);
	int size_b = sizeof(b) / sizeof(int);

	if (is_same_arr(a, b, size_a, size_b) == true)
		cout << "Identical arrays" << endl;
	else
		cout << "Not identical arrays" << endl;

	
	return 0;
}

bool is_same_arr(int a[], int b[], int size_a, int size_b) {

	if (size_a != size_b)
		return false;

	for (int i = 0; i < size_a; i++) 
		if (a[i] != b[i])
			return false;

	return true;

}