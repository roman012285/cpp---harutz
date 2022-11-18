/* Lesson8 ex3b*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void rd_file(string f_name);

int main() {

	string f_name = "my_numbers.txt";

	ofstream myFile(f_name);
	
	if(!myFile){
		cout << "OOPS, error opening file" << endl;
		exit(1);
	}

	double num;

	cout << "Please enter number until EOF (ctrl + z): ";
	
	while (cin >> num) {
		cout << "Please enter number until EOF (ctrl + z): ";
		myFile << num << "\n";
	}

	myFile.close();

	//rd_file(f_name);

	return 0;
}

void rd_file(string f_name) {

	ifstream rd_myFile(f_name);

	if (!rd_myFile) {
		cout << "OOPS, error opening file" << endl;
		exit(1);
	}

	int num1, num2, num3;

	rd_myFile >> num1 >> num2 >> num3;

	cout << endl;

	cout << "First number is : " << num1 << endl;
	cout << "Second number is : " << num2 << endl;
	cout << "Third number is : " << num3 << endl;
	
	rd_myFile.close();

}