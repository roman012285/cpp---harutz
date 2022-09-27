/* Exercise 1.7 */

#include<iostream>
using namespace std;

int main() {
	
	int a, b;
	double c;
	
	cout << "enter num \"a\" (must be Integer)" << endl;
	cin >> a;

	cout << "enter num \"b\" (must be Integer)" << endl;
	cin >> b;

	cout << "enter num \"c\"" << endl;
	cin >> c;

	cout << endl;

	cout << a / b << endl << b / c << endl << a * c << endl;

	return 0;

}