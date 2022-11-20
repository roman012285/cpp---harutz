/* Ex1.1 2022 semester A */

#include<iostream>

using namespace std;

int main() {
	
	int a, b; // input numbers
	char op;

	cout << "Get a: ";
	cin >> a;

	cout << "Get b: ";
	cin >> b;

	cout << "Get operation: ";
	cin >> op;

	if (op == '+')
		cout << "a + b = " << a + b << endl;
	if (op == '-')
		cout << "a - b = " << a - b << endl;
	if (op == '*')
		cout << "a * b = " << a * b << endl;
	if (op == '/')
		cout << "a / b = " << (double)a / b << endl;

	return 0;                      
}

