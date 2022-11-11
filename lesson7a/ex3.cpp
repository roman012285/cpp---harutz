/*
	lesson 7a ex3
*/

#include<iostream>

using namespace std;

void swap(int* x, int* y); // pass by address
void swap2(int& x, int& y); // pass by referance


int main() {
	
	int x, y;  

	cout << "Please enter X: " << endl;
	cin >> x;

	cout << "Please enter Y: " << endl;
	cin >> y;

	swap(&x, &y); // & - we are sending an address of a variable
	
	cout << "The new X is: " << x << endl;
	cout << "The new Y is: " << y << endl;

	cout << endl;

	swap2(x, y); // & - we are sending an address of a variable

	cout << "The new X is: " << x << endl;
	cout << "The new Y is: " << y << endl;

	return 0;
}

void swap(int* x, int* y) {

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}


void swap2(int& x, int& y) {

	int temp;

	temp = x;
	x = y;
	y = temp;

}