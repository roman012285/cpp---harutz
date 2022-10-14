/* Home assignment 3 ex1
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

/* Function prototypes */
int nearest_prime(int n); // Returns nearest prime
bool is_prime(int number); // Returns true is the number is prime else returns false
int nearest_to_num(int number, int small, int big); // Return closest number to "number"

int main() {

	int number;

	cout << "Please enter a number: " << endl;
	cin >> number;

	cout << "The nearest prime number is: " << nearest_prime(number) << endl;
	
	return 0;

}

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




