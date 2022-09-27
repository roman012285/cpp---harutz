/* lesson2 exercise 6 */

#include<iostream>
using namespace std;

int main() {

	int number;
	int sum_of_digits;

	cout << "Please enter a number" << endl;
	cin >> number;

	if ((number > 999) || (number < 100))
		cout << "ERROR" << endl;
	else {
		sum_of_digits = number % 10;					// 457 % 10 = 7
		number = number / 10;						    // number /= 10 = 45
		sum_of_digits += number % 10 + number/ 10; 		// sum_of_digits = 12
			
		cout << "sum of digits is: " << sum_of_digits << endl;
	}

	return 0;
}