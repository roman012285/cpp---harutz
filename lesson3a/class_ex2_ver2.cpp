/* printing numbers that divided by 3 verion2
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int number;
	int counter_yes = 0, counter_no = 0;

	cout << "Please enter a number" << endl;
	cin >> number;

	while ((number < 10) && (number > 1)) {

		if (number % 3 == 0) {
			cout << "The number is:" << number << endl;
			counter_yes++;
		}
		else
			counter_no++;

		cout << "Please enter another number" << endl;
		cin >> number;

	}
	
	cout << "The amount of good numbers: " << counter_yes << endl;
	cout << "The amount of bad numbers: " << counter_no << endl;

	cout << "Game Over" << endl;
		
	return 0;
}