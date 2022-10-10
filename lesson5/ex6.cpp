/* Lesson 5 ex6
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

// Function prototypes
double my_pow(int base, int exponent);

int main() {

	int base, exponent;
	double result;

	cout << "Enter base: " << endl;
	cin >> base;

	cout << "Enter exponent: " << endl;
	cin >> exponent;

	result =  my_pow(base, exponent);

	cout << "The result is: " << result << endl;

	return 0;

}

// Calculation pow. base ^ exponent
double my_pow(int base, int exponent) {

	double result = base;

	if (exponent == 0) {
		result = 1;
		return result;
	}
	
	for (int i = 1; i < exponent; i++)
		result = base * result;

	return result;
}



