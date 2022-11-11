/*
	lesson 7a ex6
*/

#include<iostream>

using namespace std;

void min_max(int* a, int size, int* min, int *max);

int main() {
	
	int a[] = { 12, 2, 31, -20, 5 };
	int min, max;

	min_max(a, sizeof(a) / sizeof(int), &min, &max);

	cout << "minimum value is: " << min << " maximum value is: " << max << endl;
	
	return 0;
}

void min_max(int* a, int size, int* min, int* max) {

	*min = *a;
	*max = *a;

	for (int i = 1; i < size; i++) {
		if (*(a + i) > * max)
			*max = *(a + i);
		if (*(a + i) < * min)
			*min = *(a + i);
	}
	
}




