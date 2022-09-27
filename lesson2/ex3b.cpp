/* lesson2 exercise 3 ver 2 */

#include<iostream>
using namespace std;

int main() {

	double age;
	int grade;

	cout << "Please Enter your age: " << endl;
	cin >> age >> grade;


	if (((age < 0) || (age > 120)) || ((grade < 200) || (grade > 800)))
		cout << "Something wrong" << endl;
	else
		if ((age >= 16) && (grade >= 550))
			cout << "CONGRADULATIONS!!!" << endl;
		else
			cout << "Sorry" << endl;

	return 0;
}