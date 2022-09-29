/* lesson3 exercise 4
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	// Series variables definitin
	double a, d;  // d - difference between two numbers in arithmetic series
	int n;        // number of elements in a arithmetic series
	
	double sum;

	cout << "Please enter a1: " << endl;
	cin >> a;

	cout << "Please enter d: " << endl;
	cin >> d;

	cout << "Please enter n: " << endl;
	cin >> n;

	sum = a;

	while (n > 1) { 
		a = a + d;
		sum = sum + a;
		n--;
	}
	
	cout << "The sum is: " << sum << endl;

	return 0;
}