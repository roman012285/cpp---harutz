/* Lesson9 ex1 */

#include<iostream>
#include<string>

using namespace std;

bool is_number(string s);

int main() {

	string s;

	cout << "Please enter your sentence: " << endl;
	getline(cin, s);

	if (is_number(s) == true)
		cout << "TRUE";
	else
		cout << "FALSE";

	return 0;
}

bool is_number(string s) {

	int cnt_dots = 0;

	for (int i = 0; i < s.length(); i++) {
		if ((s[i] > '0') && (s[i] < '9'))
			continue;
		if (s[i] == '.') {
			cnt_dots++;
			if (cnt_dots > 1)
				return false;
			else
				continue;
		}

		return false;
	}

	return true;

}

