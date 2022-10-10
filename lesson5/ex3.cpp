/* Lesson 5 ex3
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

// Function prototypes
double BigOfTwo(double num1, double num2);

int main() {
	
	double number1, number2;

	cout << "Please enter number 1: " << endl;
	cin >> number1;

	cout << "Please enter number 2: " << endl;
	cin >> number2;

	cout << "The Biggest number : " << BigOfTwo(number1, number2) << endl;

	return 0;
}

double BigOfTwo(double num1, double num2) {

	if (num1 >= num2)
		return num1;
	else
		return num2;


}