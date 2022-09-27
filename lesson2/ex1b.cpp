#include<iostream>
using namespace std;

int main() {

	double num1, num2;

	cout << " Please enter two numbers" << endl;
	cin >> num1 >> num2;

	if (num1 >= num2) 
		if (num1 > num2)
			cout << "The biggest number is the first" << endl;
		else
			cout << "The numbers are equal" << endl;
	else
		cout << "The biggest number is the second" << endl;

	return 0;

}