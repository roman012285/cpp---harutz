/* Lesson 5 ex2
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

double sum(double num1, double num2) {

	double result = 0;

	result =  num1 + num2;

	return result;

}

int main() {
	
	double number1, number2;
	double result;

	cout << "Please enter number 1: " << endl;
	cin >> number1;

	cout << "Please enter number 2: " << endl;
	cin >> number2;

	result = sum(number1, number2);

	cout << "The sum is : " << result << endl;

	return 0;
}


