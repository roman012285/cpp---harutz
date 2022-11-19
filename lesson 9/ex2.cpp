/* Lesson9 ex2 */

#include<iostream>
#include<string>

using namespace std;

string common(string a, string b);

int main() {

	string a = "abcfgvk";
	string b = "cbadvm"; 
	
	cout << "\"" << common(a, b) << "\"";

	return 0;
}

string common(string a, string b){
	
	string cmn = "";

	for (int i = 0; i < a.length(); i++) {
		if (b.length() == 0)
			return cmn;
		for (int j = 0; j < b.length(); j++) {
			if (a[i] != b[j])
				continue;
			else {
				cmn = cmn + a[i];
				//////////
				for (int k = j; k < b.length(); k++) {
					if (b[k] == a[i]) {
						b.erase(k, 1);
						continue;
					}
				}

				break;
				//////////
				
			}
		} // for (int j....)

	} // for (int i....)
	
	return cmn;
}
