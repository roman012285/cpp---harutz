/*
	String Ex2
*/

#include<iostream>
#include<string>

using namespace std;

string reverse(string s);

int main() {
	
	string s;
	string s_reverse;

	cout << "Please Enter your string" << endl;
	getline(cin, s);
	
	s_reverse = reverse(s);

	if (s.compare(s_reverse) == 0)
		cout << "POLYNDROME";
	else
		cout << "NOT APOLYNDROME";

	return 0;
}

string reverse(string s) {

	char temp;
	int len = s.length();

	int eff_len = len / 2;

	for (int i = 0; i < eff_len; i++) {
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}

	return s;

}