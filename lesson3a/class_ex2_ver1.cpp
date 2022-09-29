/* printing numbers that divided by 3 verion1
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int number;

	cout << "Please enter a number" << endl;
	cin >> number;

	while ((number < 10) && (number > 1)) {

		if (number % 3 == 0) 
			cout << number << endl;

		cout << "Please enter another number" << endl;
		cin >> number;

	}
	
	cout << "Game Over" << endl;
		
	return 0;
}