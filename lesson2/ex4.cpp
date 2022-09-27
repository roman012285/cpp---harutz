/* lesson2 exercise 4 */

#include<iostream>
using namespace std;

int main() {

	int number;

	cout << "Please enter a number" << endl;
	cin >> number;

	if (number < 0)
		cout << "Negative number, try later" << endl;
	else {
		if (number % 2 == 0)
			cout << "Even number" << endl;
		else
			cout << "Odd number" << endl;
	}

	return 0;
}