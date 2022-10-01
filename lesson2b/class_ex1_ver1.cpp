/* lesson3b exercise 1 version a
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int number;
	int counter = 0; // counts number of times if the number has a divider
	int i; // loop variable

	cout << "Please enter a number bigger than 1: " << endl;
	cin >> number;

	// Main Loop
	for (i = 2; i < number; i++) {
		if (number % i == 0)
			counter++;
	}

	if (counter > 0)
		cout << "Not a prime number!" << endl;
	else
		cout << "Prime number!" << endl;

	
	return 0;
}



