/* lesson3 exercise 5 ver2
   Created by roman Gilgor
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {

	int number, temp;
	int sum = 0;

	cout << "Please enter a number: " << endl;
	cin >> number;

	for ( ; number >0 ; number /= 10)
		sum = sum + number % 10;
	
	cout << "The sum is: " << sum << endl;

	return 0;
}