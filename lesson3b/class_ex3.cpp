/* lesson3b exercise 3
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
#include<iomanip>
using namespace std;

int main() {

	double number;

	double max;
	double min;

	double sum = 0, counter = 0;

	int index_min = 1, index_max = 1;

	cout << "Please enter series of numbers(end by entering 0) :" << endl;
	cin >> number;

	min = number;
	max = number;

	if (number == 0) {

		cout << "The maximum value is: 0 (Cell number 0)" << endl;
		cout << "The minimum value is: 0 (Cell numer 0)" << endl;
		cout << "The average is : 0" << endl;
	}

	while (number != 0) {

		counter++;

		if (number > max) {
			max = number;
			index_max = counter;
		}

		if (number < min) {
			min = number;
			index_min= counter;
		}

		sum = sum + number;

		cin >> number;
	}

	if (counter > 0) {
		cout << "The maximum value is:" << max << " (Cell number " << index_max << ")" << endl;
		cout << "The minimum value is:" << min << " (Cell number " << index_min << ")" << endl;
		cout << "The average is: " << setprecision(2) << sum / counter << endl;
	}

	return 0;
}






