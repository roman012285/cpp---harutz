#include<iostream>
using namespace std;

int main() {

	double a, b, c; 

	cout << "Please enter three numbers" << endl;
	cin >> a >> b >> c;

	if (a < b)
		if (a < c)
			cout << "The smallest number is: " << a << endl;
		else
			cout << "The smallest number is: " << c << endl;
	else 
		if(a > b)   
			if (b < c)
				cout << "The smallest number is: " << b << endl;
			else
				cout << "The smallest number is: " << c << endl;
		if(a == b)
			if (a < c)
				cout << "The smallest number is: " << b << endl;
			else
				cout << "The smallest number is: " << c << endl;

		return 0;
}