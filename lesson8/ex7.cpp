/* Lesson8 ex7 */

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int fill_file(string f_name);
void read_fill(string f_name, double arr[], int size);


int main() {

	string f_name;

	cout << "Please enter file name" << endl;
	cin >> f_name;

	f_name = f_name + ".txt";

	int size = fill_file(f_name);

	double* arr = new double[size];  // creation of a 1D dynamic array

	read_fill(f_name, arr, size);

	//Printing array
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	
	delete[]arr;
	
	return 0;
}



int fill_file(string f_name) {

	ofstream wr_file;
	wr_file.open(f_name);

	if (!wr_file) {
		cout << "Fatal Error, cant open file in fill_file func" << endl;
		exit(1);
	}

	double num;
	int i = 1;

	cout << "num" << i << ": ";

	while (cin >> num) {
		wr_file << num << endl;
		i++;
		cout << "grade" << i << ": ";
	}

	wr_file.close();

	return i - 1;

}

void read_fill(string f_name, double arr[], int size) {

	ifstream rd_file;
	rd_file.open(f_name);

	if (!rd_file) {
		cout << "Fatal Error, cant open file in read_fill func" << endl;
		exit(1);
	}

	double grade;

	for (int i = 0; i < size; i++) {
		rd_file >> grade;
		*arr++ = grade;
	}

	rd_file.close();

}
