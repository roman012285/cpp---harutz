/* Home assignment 3 FULL
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

/* Function prototypes */

/// ex1 functions
int nearest_prime(int n); // Returns nearest prime
bool is_prime(int number); // Returns true is the number is prime else returns false
int nearest_to_num(int number, int small, int big); // Return closest number to "number"

/// ex2 functions
int GCD(int num1, int num2);

/// ex3 functions
void Tylor(int x, int m);
int Factorial(int x);

/// ex4 functions
bool perfect(int n);


int main() {

	int number;
	int num1, num2;
	
	int x, m;
	
	bool is_perfect;

	int option = -1;
	
	while (option != 0) {

		cout << "Menu: " << endl;
		cout << "For exit press 0" << endl;
		cout << "For nearest prime press 1" << endl;
		cout << "For GCD press 2" << endl;
		cout << "For Tylor series press 3" << endl;
		cout << "For test if number is perfect press 4" << endl;

		cin >> option;

		switch (option) {

		case 0:
			break;
		case 1:
			cout << "Please enter a number: " << endl;
			cin >> number;

			cout << "The nearest prime number is: " << nearest_prime(number) << endl;
			break;
		case 2:
			cout << "Please enter first number: " << endl;
			cin >> num1;

			cout << "Please enter second number: " << endl;
			cin >> num2;

			cout << "The GCD of " << num1 << ", " << num2 << " is: " << GCD(num1, num2) << endl;

			break;
		case 3:
			cout << "Please enter x: " << endl;
			cin >> x;

			cout << "Please enter m: " << endl;
			cin >> m;

			Tylor(x, m);

			break;
		case 4:
			cout << "Please enter number: " << endl;
			cin >> number;

			is_perfect = perfect(number);

			if (is_perfect == true)
				cout << "Perfect" << endl;
			else
				cout << "Not perfect" << endl;

			break;

		default:
			break;

		} // end switch

		cout << endl;

	} // end while

	return 0;

} // end main

int nearest_prime(int n) {

	int i;
	int small_prime, big_prime;

	if ((n == 1) || (n == 0)) return 2; // Special case

	// Looking for smaller prime numbers
	for (i = n; i >= 2; i--) {

		if (is_prime(i) == true) {
			small_prime = i;
			break;
		}

	}

	// Looking for bigger prime numbers
	i = n; // Initialization

	while (1) {

		if (is_prime(i) == true) {
			big_prime = i;
			break;
		}

		i++;
	}

	return nearest_to_num(n, small_prime, big_prime);

}


bool is_prime(int number) {

	if ((number == 0) || (number == 1))
		return false;

	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0)
			return false;
	}

	return true;
}

int nearest_to_num(int number, int small, int big) {

	if ((number - small) <= (big - number))
		return small;
	else
		return big;

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

void Tylor(int x, int m) {

	double Tylor_sum = 0;

	cout << "e^" << x << " = ";

	for (int i = 1; i <= m; i++) {

		Tylor_sum = Tylor_sum + pow(x, i - 1) / Factorial(i - 1);

		if (i <= 2)
			cout << pow(x, i - 1);
		else
			cout << pow(x, i - 1) << "/" << Factorial(i - 1);

		if (i != m)
			cout << " + ";
	}

	if (m != 1)
		cout << " = " << Tylor_sum << endl;

}

int Factorial(int x) {

	int value = 1;

	if (x == 0)
		return 1;

	for (int i = 1; i <= x; i++)
		value = value * i;

	return value;
}

bool perfect(int n) {

	int sum = 0;

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			sum += i;
	}

	if (sum == n)
		return true;
	else
		return false;

}
