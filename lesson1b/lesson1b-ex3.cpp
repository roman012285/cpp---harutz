/*Created by Roman Gilgor
* Exercise 3. Printing numbers of two digits number
* 25.9.2022
*/

#include<iostream>
using namespace std;

int main() {

	int number;
	int num1, num0;

	cout << "Please enter a 2-digits number: " << endl;
	cin >> number;
	cout << endl;


	num1 = number / 10;
	num0 = number % 10;
	
	cout << num1 << " " << num0 << endl << endl;
	cout << num0 << num1 << endl << endl;
	cout << num1 << endl << endl << num0 << endl << endl<< num0 << endl;

	return 0;
}

