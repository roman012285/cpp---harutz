/* Assignment number 1. Exercise2 
   Email : roman329@gmail.com
 */


#include <iostream>
using namespace std;

int main() {
	
	int number;
	int temp;
	int c_100, c_50, c_20, c_10, c_5, c_2;

	cin >> number;
	temp = number;

	c_100 = number / 100;
	number = number % 100;

	c_50 = number / 50;
	number = number % 50;

	c_20 = number / 20;
	number = number % 20;

	c_10 = number / 10;
	number = number % 10;

	c_5 = number / 5;
	number = number % 5;

	c_2 = number / 2;
	number = number % 2;

	cout << temp << " = 100*" << c_100 << " + 50*" << c_50 << " + 20*" << c_20;
	cout << " + 10*" << c_10 << " + 5*" << c_5 << " + 2*" << c_2 << " + 1*" << number << "NIS" << endl;

	return 0;
}



