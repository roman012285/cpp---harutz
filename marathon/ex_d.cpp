/* Exam Solution */

#include<iostream>
#include<string>

using namespace std;

bool is_ok(string f_name);

int main() {
	
	string  f_name;
	getline(cin, f_name);

	if (is_ok(f_name) == true)
		cout << "OK";
	else
		cout << "NOT OK";

	return 0;                      
}

bool is_ok(string f_name) {

	// check string length
	int i = 0;
	while (f_name[i] != '\0')
		i++;

	if ((f_name[i - 1] == 't') && (f_name[i - 2] == 'x') && (f_name[i - 3] == 't'))
		return true;
	else
		return false;


}

