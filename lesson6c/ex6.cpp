/*
	String Ex6
*/

#include<iostream>
#include<string>

using namespace std;

string add_string(string o_s, string n_s, int index);

int main() {
	
	string s = "today is sunday";
	string s1 = "abc";
	
	string new_s;

	int index = 3;

	new_s = add_string(s, s1, index);

	cout << "The new sentence is: " << endl;
	cout << new_s;

	return 0;
}

string add_string(string o_s, string n_s, int index) {

	string ret_s;

	if (index > o_s.length())
		return o_s;

	if (index == o_s.length())
		return (o_s + n_s);

	for (int i = 0; i < o_s.length(); i++) {
	
		if (i == index)
			ret_s = ret_s + n_s;

		ret_s += o_s[i];

	}

	return ret_s;

}
