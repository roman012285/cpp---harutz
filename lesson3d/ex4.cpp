/* Assignment number 2. ex4
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {
	
	int number;
	int digit; // Printed number

	cin >> number;

	// Rows loop
	for (int i = 1; i <= number; i++) {
		digit = 1;
		
		// Inside row loop
		for (int j = 1; j <= number; j++) {
			if (j <= number - i)
				cout << " ";
			else {
				cout << digit;
				digit++;
			}
		}
		cout << endl;
	}


	return 0;
}
	










