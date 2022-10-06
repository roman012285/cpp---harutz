/* Lesson 4 ex3
   Email : roman329@gmail.com
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
		
	int random_num;
	int i = 0;

	srand(time(0));

	while (i < 10) {
		random_num = rand() % (100 - 50 + 1) + 50;
		cout << random_num << endl;
		i++;
	}
	return 0;
}

