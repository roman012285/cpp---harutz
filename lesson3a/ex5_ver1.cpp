/* lesson3 exercise 5 ver1
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int number;
	int sum = 0; // sum of digits

	cout << "Please enter a number: " << endl;
	cin >> number;

	while (number >= 10) {
		
		sum = sum + number % 10;
		number = number / 10;


	}

	sum = sum + number;

	cout << "The sum of digits is: " << sum << endl;

	return 0;
}