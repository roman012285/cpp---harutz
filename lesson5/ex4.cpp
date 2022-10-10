/* Lesson 5 ex4 (DIFFERENT VERSION!!!)
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

// Function prototypes
int is_prime(int number);

int main() {
	
	int my_num;
	int counter = 0;

	cout << "Please enter possitive number: " << endl;
	cin >> my_num;

	while (my_num > 0) {

		if (is_prime(my_num % 10) == 1)
			counter++;

		my_num = my_num / 10;

	}

	cout << "The number consists of " << counter << " prime numbers" << endl;

	return 0;

}

int is_prime(int number) {

	if ((number == 0) || (number == 1))
		return 0;

	for (int i = 2; i <= number / 2; i++) { 
		if (number % i == 0)
			return 0;
	}

	return 1;

}
