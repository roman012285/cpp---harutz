/* Exam Solution */

#include<iostream>
#include<fstream>

using namespace std;

int count7(string filename);

int main() {
	
	string f_name = "dice_draw.txt";

	cout << "Number is: " << count7(f_name);

	return 0;                      
}

int count7(string filename) {

	int n1, n2;
	int cnt = 0;

	ifstream myFile;
	myFile.open(filename);

	if (!myFile) {
		cout << "error";
		exit(1);
	}

	while (myFile >> n1) {
		myFile >> n2;

		if (n1 + n2 == 7)
			cnt++;
	}

	myFile.close();

	return cnt;
}
