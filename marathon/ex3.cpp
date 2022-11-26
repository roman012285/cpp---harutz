/* Exam Solution */

#include<iostream>
#include<string>

using namespace std;
string searchSearchReplace(string str, string oldSubStr, string newSubStr);

int main() {
	
	string str = "to be or not to be";
	string oldSubStr = "be";
	string newSubStr = "eat";
	
	cout << searchSearchReplace(str, oldSubStr, newSubStr);

	return 0;                      
}

string searchSearchReplace(string str, string oldSubStr, string newSubStr) {

	if (str.length() < oldSubStr.length())
		return str;

	while (str.find(oldSubStr) < str.length()) {

		str.replace(str.find(oldSubStr), oldSubStr.length(), newSubStr);

	}

	return str;


}

