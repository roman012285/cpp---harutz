/* Assignment number 2 full. Implemented with Switch - Case
   full version
   Email : roman329@gmail.com
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	int option; // Chose option from the table

	do {

		cout << "Menu: " << endl;
		cout << "Press: " << endl;
		cout << "0. for exit" << endl;
		cout << "1. for sum of fractions" << endl;
		cout << "2. for print numbers with sum digits equal to number" << endl;
		cout << "3. for prime digits" << endl;
		cout << "4. for print pyramid" << endl;
		cout << "Enter your choice : " << endl;
	
		cin >> option;
	

		switch (option) {

		case 1:
		{
			int f_num; // final number 
			double sum = 0;
			int i;

			cin >> f_num;

			for (i = 1; i <= f_num; i++)
				sum = sum + 1 / pow(i, 2);

			cout << fixed << setprecision(4) << sum << endl;
			
			cout << endl; // Seperate MENU from the program in nexts times it will be shown

			break;
		}
		case 2:
		{
			int tenth, units; // Printed number representation
			int n;

			cin >> n;

			if (n <= 9) {
				for (int i = 0; i <= n - 1; i++) {
					tenth = n - i;
					units = i;

					if (i < n - 1)
						cout << tenth << units << ", ";
					else
						cout << tenth << units;
				}
			}

			else {

				tenth = 10;
				units = n % 10;

				while (units < 9) {
					units++;
					tenth--;

					if (units < 9)
						cout << tenth << units << ", ";
					else
						cout << tenth << units << endl;
				}
			} // else
			
			cout << endl ; // Seperate MENU from the program in nexts times it will be shown

			break;
		}
		case 3:
		{
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

			cout << endl; // Seperate MENU from the program in nexts times it will be shown

			break;
		}
		case 4:
		{
			int pyramid_height;
			int printed_digit = 0; // Printed number

			cin >> pyramid_height;

			// Rows loop
			for (int i = 1; i <= pyramid_height; i++) {
				printed_digit = 1;

				// Inside row loop
				for (int j = 1; j <= pyramid_height; j++) {
					if (j <= pyramid_height - i)
						cout << " ";
					else {
						cout << printed_digit;
						printed_digit++;
					}
				}
				cout << endl;
			}

			cout << endl; // Seperate MENU from the program in nexts times it will be shown

			break;
		}

		default:
			break;
		}
	} while (option != 0);

	return 0;
}

















































