/* Exercise 1.6 */

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	
	int num;
	
	cout << "Enter your number please" << endl;
	cin >> num;

	cout << "The sqaure root is: " << sqrt(num) << ". The power is: " << pow(num, 2) << ". The modulo is: " << num % 7 << endl;

	return 0;

}