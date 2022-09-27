/*Created by Roman Gilgor
* Exercise 2. Printing result and reminder of two numbers
* 25.9.2022
*/

#include<iostream>
using namespace std;

int main() {

	int num1, num2; //num1 is the nominator and num2 is denominator
	int result, reminder;

	cout << "Please enter 2 positive numbers:" << endl;
	cin >> num1 >> num2;

	result = num1 / num2;
	reminder = num1 % num2;

	// 45/7 = 6(3)
	// 45 = 7*6 + 3

	cout << num1 << "/" << num2 << " = " << result << "(" << reminder << ")" << endl;
	cout << num1 << " = " << num2 << " * " << result << " + " << reminder << endl;

	return 0;
}

