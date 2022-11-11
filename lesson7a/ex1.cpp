/*
	lesson 7a ex1
*/

#include<iostream>

using namespace std;

void change(int* x);

int main() {
	
	int x;  

	cout << "Please enter your number: " << endl;
	cin >> x;

	change(&x); // & - we are sending an address of a variable
	
	cout << "The new x is: " << x << endl;

	return 0;
}

void change(int* x) { // pass by value

	cout << "Please enter new value for x: " << endl;
	cin >> *x;  // * - we are changin the content located in address

}
