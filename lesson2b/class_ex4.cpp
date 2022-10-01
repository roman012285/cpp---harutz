/* lesson3b exercise 4
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {
	
	int n;
	int counter;
	int i, j;

	cout << "Please enter n: " << endl;
	cin >> n;

	//Printing first row of stars (*)
	for (i = 0; i < n; i++)
		cout << "*";

	//Main loops
	for (i = 0; i < n - 1; i++) { // row loop
		cout << endl;
		cout << "*";
		counter = 0;
		
		for (j = 0; j < n - 1; j++) {
			if (counter < n - 2 - i) {
				cout << " ";
				counter++;
			}
			else
				cout << "*";
		}
	}

	return 0;
}








