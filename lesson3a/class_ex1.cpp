/* sum of numberi
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	int number;

	cout << "Please enter a number" << endl;
	cin >> number;

	while (number != 0) {

		sum = sum + number;

		cout << "Please enter a number" << endl;
		cin >> number;

	}

	cout << "The sum of numbers is: " << sum << endl;

	return 0;
}
