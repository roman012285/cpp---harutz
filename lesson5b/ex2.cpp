/* Home assignment 3 ex2 
   GCD algorithm from wikipedia
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

/* Function prototypes */
int GCD(int num1, int num2);

int main() {

	int num1, num2;

	cout << "Please enter first number: " << endl;
	cin >> num1;

	cout << "Please enter second number: " << endl;
	cin >> num2;
	
	cout << "The GCD of " << num1 << ", " << num2 << " is: " << GCD(num1, num2) << endl;

	return 0;

}

int GCD(int num1, int num2) {

	int temp; // for swaping num1 and num2 if needed (see wikipedia GCD algorithm)
	int r; // reminder
	
	if (num1 < num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	while (num2 != 0) {

		r = num1 % num2;
		num1 = num2;
		num2 = r;

	}

	return num1;

}


