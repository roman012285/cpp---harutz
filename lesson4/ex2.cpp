/* Lesson 4 ex2
   Email : roman329@gmail.com
 */

#include <iostream>
using namespace std;

int main() {
		
	char ch;
	int cnt_big = 0, cnt_small = 0, cnt_num = 0, cnt_shtrudel = 0;
	int i;

	for (i = 0; i < 10; i++) {
		cout << "Please enter tab number " << i + 1 << endl;
		cin >> ch;

		if ((ch <= 'Z') && (ch >= 'A'))
			cnt_big++;
		
		if ((ch <= 'z') && (ch >= 'a'))
			cnt_small++;
		
		if ((ch <= '9') && (ch >= '0'))
			cnt_num++;

		if (ch == '@')
			cnt_shtrudel++;
	}

	if ((cnt_big >= 3) && (cnt_small >= 2) && (cnt_num >= 2) && (cnt_shtrudel >= 1))
		cout << "Great Password";
	else
		cout << "Weak password, try again" << endl;

	return 0;
}
