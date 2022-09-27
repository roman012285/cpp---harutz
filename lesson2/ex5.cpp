/* lesson2 exercise 5 */

#include<iostream>
using namespace std;

int main() {

	int number;

	cout << "Please enter a number" << endl;
	cin >> number;

	if (number % 3 == 0)
		cout << "divided by three without any addition" << endl;

	if ((number + 1) % 3 == 0)
		cout << "divided by three addition of 1" << endl;

	if ((number + 2) % 3 == 0)
		cout << "divided by three addition of 2" << endl;

	return 0;
}