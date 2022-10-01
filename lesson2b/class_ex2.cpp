/* lesson3b exercise 2
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int i, j;
	int n;

	cout << "Please enter number of rows: " << endl;
	cin >> n;

	//responsible for row number
	for (i = 1; i <= n; i++) {

		// Loop responsible for printing 1-s in a single row
		for (j = 1; j <= i; j++) {
			cout << "1";
		}

		cout << endl;

	}

	return 0;
}





