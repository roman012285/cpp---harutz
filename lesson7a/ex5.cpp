/*
	lesson 7a ex5
*/

#include<iostream>

using namespace std;

void print(int* a, int size);

int main() {
	
	int a[] = { 1, 2, 3, 4, 5 };

	print(a, sizeof(a) / sizeof(int));
	
	return 0;
}

void print(int a[], int size) {

	for (int i = 0; i < size; i++) 
		cout << *(a + i) << " ";
	
}




