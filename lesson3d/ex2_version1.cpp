/* Assignment number 2. ex2 version1
   Store managment system
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {	

	int tenth, units; // Printed number representation
	int n;

	cin >> n;
	
	for (int i = 0; i <= n - 1; i++) {
		tenth = n - i;
		units = i;
		if (i < n - 1)
			cout << tenth << units << ", ";
		else
			cout << tenth << units;
}
	return 0;

}  










