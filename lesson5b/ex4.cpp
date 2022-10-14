/* Home assignment 3 ex4
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

/* Function prototypes */
bool perfect(int n);

int main() {

	int number;
	bool is_perfect;

	cout << "Please enter number: " << endl;
	cin >> number;

	is_perfect = perfect(number);

	if (is_perfect == true)
		cout << "Perfect" << endl;
	else
		cout << "Not perfect" << endl;

	return 0;

}

bool perfect(int n) {

	int sum = 0;

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0)
			sum += i;
	}
		
	if (sum == n)
		return true;
	else
		return false;

}
