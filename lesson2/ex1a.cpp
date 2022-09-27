#include<iostream>
using namespace std;

int main() {

	double num1, num2;

	cout << " Please enter two numbers" << endl;
	cin >> num1 >> num2;

	if (num1 > num2)
		cout << num1 << "is greater then " << num2 << endl;

	if (num1 < num2)
		cout << num2 << "is greater then " << num1 << endl;

	if (num1 == num2)
		cout << "The numbers are equal" << endl;

	return 0;

}
