/*
	lesson 7a ex2
*/

#include<iostream>

using namespace std;

void change(double* x, double* y);

int main() {
	
	double x, y;  

	cout << "Please enter X: " << endl;
	cin >> x;

	cout << "Please enter Y: " << endl;
	cin >> y;

	change(&x, &y); // & - we are sending an address of a variable
	
	cout << "The new X is: " << x << endl;
	cout << "The new Y is: " << y << endl;

	return 0;
}

void change(double* x, double *y) { // pass by value

	cout << "Please enter new value for x: " << endl;
	cin >> *x;  // * - we are changin the content located in address

	cout << "Please enter new value for y: " << endl;
	cin >> *y;  // * - we are changin the content located in address

}
