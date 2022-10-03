/* Assignment number 2. ex2 version2
   for print numbers with sum digits equal to number
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {	

	int tenth, units; // Printed number representation
	int n;

	cin >> n;
	
	if (n <= 9) {
		for (int i = 0; i <= n - 1; i++) {
			tenth = n - i;
			units = i;
			
			if (i < n - 1)
				cout << tenth << units << ", ";
			else
				cout << tenth << units;
		}
	}
	
	else {

		tenth = 10;
		units = n % 10;

		while (units < 9) {
			units++;
			tenth--;
			
			if (units < 9)
				cout << tenth << units << ", ";
			else
				cout << tenth << units;
		}
	} // else
	
	return 0;

} // main 














