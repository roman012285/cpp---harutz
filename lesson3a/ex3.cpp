/* lesson3 exercise 3
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	double min, max;
	double number;
	int counter;

	for (counter = 0; counter < 10; counter++) {
		cout << "Please enter " << counter + 1 << "-th number" << endl;
		cin >> number;
		
		// Initialization 
		if (counter == 0) {
			min = number;
			max = number;
		}
		else {
			if (number > max)
				max = number;
			if (number < min)
				min = number;
		}
	}

	cout << "The smallest number is: " << min << endl;
	cout << "The biggest number is: " << max << endl;

	return 0;
}