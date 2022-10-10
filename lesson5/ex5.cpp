/* Lesson 5 ex5
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

// Function prototypes
void dividers_print(int num);

int main() {

	int num;

	cout << "Enter a number: " << endl;
	cin >> num;

	dividers_print(num);

	return 0;

}


// Function that prints all the dividers if a given number (num argument)
void dividers_print(int num) {

	int i;

	for (i = 1; i <= num; i++) {
		if (num % i == 0)
			cout << i << " "; 
	}
}


