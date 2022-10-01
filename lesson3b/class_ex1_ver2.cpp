/* lesson3b exercise 1 version b
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int number;
	int flag = 0; // counts number of times if the number has a divider
	int i; // loop variable

	cout << "Please enter a number bigger than 1: " << endl;
	cin >> number;

	// Main Loop
	for (i = 2; i < number / 2; i++) {
		if (number % i == 0) {
			flag = 1;
			break;
		}
	}

	if (flag != 0)
		cout << "Not a prime number!" << endl;
	else
		cout << "Prime number!" << endl;

	
	return 0;
}




