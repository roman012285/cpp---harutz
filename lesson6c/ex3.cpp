/*
	String Ex3
*/

#include<iostream>
#include<string>

using namespace std;

string logest_word(string s);

int main() {
	
	string s;
	string longest;

	cout << "Please Enter a Sentence: " << endl;
	getline(cin, s);

	longest = logest_word(s);

	cout << "The longest word is: " << endl;
	cout << longest;

	return 0;
}

string logest_word(string s) {

	string lword, pword;

	for (int i = 0; i <= s.length(); i++) {

		if (s[i] != ' ' && s[i] != '\0')
			pword = pword + s[i];
		else {
			if (lword.length() < pword.length())
				lword = pword;
			
			pword = "";
		}
		
	}
	
	return lword;

}