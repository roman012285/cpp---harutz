/* Lesson 4 ex1
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {
		
	char var;

	cout << "Please enter any char: " << endl;
	cin >> var;

	if ((var <= '9') && (var >= '0'))
		cout << "Number" << endl;

	if ((var <= 'Z') && (var >= 'A'))
		cout << "Big Letter" << endl;

	if ((var <= 122) && (var >= 97))  // if ((var <= 'z') && (var >= 'a'))
		cout << "Small letter" << endl;

	return 0;
}
