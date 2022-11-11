/*
	lesson 7a ex4
*/

#include<iostream>

using namespace std;


void min_max(double num1, double num2, double* min, double* max);

int main() {
	
	double num1, num2; 
	double min, max;

	cout << "Please enter num1: " << endl;
	cin >> num1;

	cout << "Please enter num2: " << endl;
	cin >> num2;

	min_max(num1, num2, &min, &max);

	cout << "The minimum number is : " << min << " and maximum number is: " << max << endl;

	return 0;
}


void min_max(double num1, double num2, double* min, double* max) {

	if (num1 > num2) {
		*max = num1;
		*min = num2;
	}
	else {
		*max = num2;
		*min = num1;
	}
	




}
