/*
	lesson 6d ex1
*/

#include<iostream>

using namespace std;

double large_of_average(double a[], int size);


int main() {
	
	double arr[] = { 1, 2, 3, 4, 5 };

	cout << "The amount of numbers bigger than the average is: " << large_of_average(arr, sizeof(arr) / sizeof(double)) << "%" << endl;

	return 0;
}

double large_of_average(double a[], int size) {

	double sum = 0;
	int bigger = 0;
	double avg;

	for (int i = 0; i < size; i++)
		sum += a[i];

	avg = sum / size;


	for (int i = 0; i < size; i++) 
		if (a[i] > avg)
			bigger++;

	return ((double)bigger / size) * 100;

}
