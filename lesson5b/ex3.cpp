/* Home assignment 3 ex3
   Email : roman329@gmail.com
 */

#include <iostream>
#include <cmath>
using namespace std;

/* Function prototypes */
void Tylor(int x, int m);
int Factorial(int x);

int main() {

	int x, m;

	cout << "Please enter x: " << endl;
	cin >> x;

	cout << "Please enter m: " << endl;
	cin >> m;
	
	Tylor(x, m);

	return 0;

}

void Tylor(int x, int m) {

	double Tylor_sum = 0;

	cout << "e^" << x << " = ";

	for (int i = 1; i <= m; i++) {

		Tylor_sum = Tylor_sum + pow(x, i - 1) / Factorial(i - 1);

		if (i <= 2)
			cout << pow(x, i - 1);
		else
			cout << pow(x, i - 1) << "/" << Factorial(i - 1);

		if (i != m)
			cout << " + ";
	}
	
	if (m != 1)
		cout << " = "  << Tylor_sum << endl;

}

int Factorial(int x) {

	int value = 1;

	if (x == 0)
		return 1;

	for (int i = 1; i <= x; i++)
		value = value * i;

	return value;
}



