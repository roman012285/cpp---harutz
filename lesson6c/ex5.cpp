/*
	String Ex4
*/

#include<iostream>
#include<string>

using namespace std;

string replacea2b(string s);

int main() {
	
	string s;

	cout << "Please Enter a Sentence: " << endl;
	getline(cin, s);

	s = replacea2b(s);

	cout << "The replaced sentence is: " << endl;
	cout << s;

	return 0;
}

string replacea2b(string s) {

	string new_str;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != 'a')
			new_str += s[i];
		else
			new_str = new_str + 'b';
	}
		
		
	return new_str;
	
}