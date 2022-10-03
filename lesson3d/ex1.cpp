/* Assignment number 2. ex1
   Series calculation
   Email : roman329@gmail.com
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	int n;
	double sum = 0;
	int i;

	cin >> n;

	for (i = 1; i <= n; i++) 
		sum = sum + 1 / pow(i, 2);

	cout << fixed <<  setprecision(4) << sum << endl;

	return 0;

}  






