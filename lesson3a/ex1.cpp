// ONLY VERSION B, THE FIRST VERSION IMPLEMENTED WITH WHILE LOOP!!!!!!!!!!!!

/* lesson3 exercise 1_verb
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int number;
	int i;

	cout << "Please enter a number" << endl;
	cin >> number;

	for (i = 0; i <= number; i = i + 2) { 

		if( (i == number) || (i + 1 == number))
			cout << i;
		else
			cout << i << ", ";

	}

	return 0;
}
