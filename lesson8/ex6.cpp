/* Lesson8 ex6 */

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void fill_file(string f_name);
double calc_avg(string f_name);
void print_file(double avg);

int main() {

	string f_name;

	cout << "Please enter file name" << endl;
	cin >> f_name;

	f_name = f_name + ".txt";

	fill_file(f_name);
	print_file(calc_avg(f_name));

	return 0;
}

void fill_file(string f_name) {

	ofstream wr_file;
	wr_file.open(f_name);

	if (!wr_file) {
		cout << "Fatal Error, cant open file in fill_file func" << endl;
		exit(1);
	}

	double grade;
	int i = 1;

	cout << "grade" << i << ": ";

	while (cin >> grade) {
		wr_file << grade << endl;
		i++;
		cout << "grade" << i << ": ";
	}

	wr_file.close();

}

double calc_avg(string f_name) {

	ifstream rd_file;
	rd_file.open(f_name);

	if (!rd_file) {
		cout << "Fatal Error, cant open file in calc_avg func" << endl;
		exit(1);
	}

	double sum = 0;
	double grade;
	int amount = 0;
	
	while (rd_file >> grade) {
		amount++;
		sum += grade;
	}
	
	rd_file.close();

	return (sum / amount);

}

void print_file(double avg) {

	ofstream wr_file;
	wr_file.open("avg_result.txt");

	if (!wr_file) {
		cout << "Fatal Error, cant open file in fill_file func" << endl;
		exit(1);
	}

	wr_file << "The average is: " << avg << endl;
	
	cout << "\navg_result.txt created succesfully";

	wr_file.close();
}