/* Assignment number 2. ex3
   Prime digits
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	bool is7 = false, is5 = false, is3 = false, is2 = false;  // possible to use flags instead
	int digit;
	int counter = 0;
	int number;

	// Variables for removing comma printing at the last prime number
	int cnt_7 = 0, cnt_5 = 0, cnt_3 = 0, cnt_2 = 0; // Counts number of times individual prime number appears
	int is_last; // Indicates if the the prime number which we prints is the last. Avoid comma at the last digit.

	cout << "Please enter a number" << endl;
	cin >> number;

	while (number >= 1) {

		digit = number % 10;
		number /= 10;

		// Counts the amount of prime numbers
		if ((digit == 7) || (digit == 5) || (digit == 3) || (digit == 2))
			counter++;

		// Checking which prime number appears
		if (digit == 7) {
			is7 = true;
			cnt_7++;
		}
		if (digit == 5) {
			is5 = true;
			cnt_5++;
		}
		if (digit == 3) {
			is3 = true;
			cnt_3++;
		}
		if (digit == 2) {
			is2 = true;
			cnt_2++;
		}
	}
		if (counter == 0)
			cout << "Prime digits are : NONE. Number of prime digits is 0" << endl;
		else {
			cout << "Prime digits are : ";

			is_last = counter;

			// Printig the prime numbers
			if (is7 == true) {
				is_last = is_last - (cnt_7 - 1);
				if (is_last == 1)
					cout << "7. ";
				else {
					cout << "7, ";
					is_last--;
				}
			}

			if (is5 == true) {
				is_last = is_last - (cnt_5 - 1);
				if (is_last == 1)
					cout << "5. ";
				else {
					cout << "5, ";
					is_last--;
				}
			}

			if (is3 == true) {
				is_last = is_last - (cnt_3 - 1);
				if (is_last == 1)
					cout << "3. ";
				else {
					cout << "3, ";
					is_last--;
				}
			}

			if (is2 == true) {
				is_last = is_last - (cnt_2 - 1);
				if (is_last == 1)
					cout << "2. ";
				else {
					cout << "2, ";
					is_last--;
				}
			}
		}
			cout << "Number of prime digits is " << counter << endl;

			return 0;
		}
	










